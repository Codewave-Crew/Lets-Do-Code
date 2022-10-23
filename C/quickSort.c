/*
Program to sort a list of numbers using Quick sort algorithm.
You have to print the intermediate values in the above program.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// For runtime calculation
#define BILLION 1000000000
// For random number upper limit
#define UPPER_LIMIT 10000
// For printing array
#define PRINT_ARR printf("Parse %d: ", parseCount); for (int p = 0; p < eltCount; p++) printf("%d ", *(ptrMainArr + p)); printf("\n"); parseCount++;

// Declare global parse counter
int parseCount = 0;
// Declare global pointer to array
int *ptrMainArr;
// Number of elements in array
int eltCount;

long double calcRunTime(struct timespec start, struct timespec end) {
    long double runTime;

    runTime = (end.tv_sec - start.tv_sec + ((long double)(end.tv_nsec - start.tv_nsec) / BILLION));
    
    return runTime;
}

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void quicksort(int *ptrArr, int numOfElts) {
    // Single element in sub-array
    if (numOfElts == 1) {
        return;
    }
    
    // No elements in sub-array
    if (numOfElts == 0) {
        return;
    }
    
    // Print elements in array
    PRINT_ARR
    
    // Select pivot element (element in middle)
    int pivotIdx;
    
    // Even number of elements in array
    if ((numOfElts) % 2 == 0) {
        pivotIdx = ((numOfElts) / 2) - 1;
    }
    // Odd number of elements in array
    else {
        pivotIdx = (int)((numOfElts) / 2);
    }
    
    int pivot = ptrArr[pivotIdx];
    
    // Initialise left and right bounds
    int lb = 0, rb = numOfElts - 2;

    // Swap pivot element with last element
    swap(ptrArr + pivotIdx, ptrArr + numOfElts - 1);
    
    while (1) {
        // Move left bound to the right until an element greater or equal to pivot element is encountered
        while (ptrArr[lb] < pivot) {
            lb++;
        }
        // Move right bound to the left until it crosses left bound or encounters an element less than pivot
        while (ptrArr[rb] >= pivot && lb <= rb) {
            rb--;
        }
        // Left bound is to the right of right bound
        if (lb > rb) {
            break;
        }
        // Swap left bound and right bound elements (if left bound is not to the right of right bound)
        swap(ptrArr + lb, ptrArr + rb);
    }
    
    // Swap pivot element and left bound element
    swap(ptrArr + lb, ptrArr + (numOfElts - 1));
    
    // Sort left sub-array (All elements to the left of left bound)
    quicksort(ptrArr, lb);
    
    // Sort right sub-array (All elements to the right of left bound)
    quicksort(ptrArr + (lb + 1), numOfElts - lb - 1);
}

int main() {
    printf("*** Quick Sort *** \n");
    printf("Enter number of elements: ");
    scanf("%d", &eltCount);
    
    int arr[eltCount];
    for (int i = 0; i < eltCount; i++) {
        arr[i] = random() % UPPER_LIMIT + 1;
    }
    
    // Assign array to global pointer variable (to print array after each parse)
    ptrMainArr = arr;
    // Note: arr -> Pointer to array's first element
    
    // Start clock
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);
    
    // Sort array using quicksort
    quicksort(arr, eltCount);
    
    // End clock
    clock_gettime(CLOCK_REALTIME, &end);
    
    PRINT_ARR
    
    printf("\nQuick sort time taken is %Lf s.\n", calcRunTime(start, end));
    // Note: '%Lf' -> Long double
    printf("(Note: Time includes time taken to print array in each parse) \n");
    
    return 0;
}


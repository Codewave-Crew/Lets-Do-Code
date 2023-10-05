/*
Program to sort the elements of an array using selection sort.
Array elements must be accessed only using pointers and not the subscript operator ([ ]).
The pass-by-reference swap function must be used.
*/

#include <stdio.h>

// Pass-by-reference -> Use pointer variable as argument (address of variable)
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

    // Input
    int numOfElements;
    printf("Enter number of elements: ");
    scanf("%d", &numOfElements);

    int arr[numOfElements];
    int i;

    for (i = 0; i < numOfElements; i++) {
        printf("Enter element [%d]: ", i + 1);
        scanf("%d", (arr+i));
    }

    // Output - before sorting
    printf("*** Unsorted Array *** \n");
    printf("{");

    for (i = 0; i < numOfElements - 1; i++) {
        printf("%d, ", *(arr + i));
    }

    printf("%d} \n", *(arr + numOfElements - 1));

    // Selection sort (Ascending order)
    int j;
    int *min = arr;    // Address of minimum value in 'arr'

    // Iterate 'numOfElements' times
    for (i = 0; i < numOfElements; i++) {

        // Find the smallest element
        // 'j = i'- Search for smallest element in 'unsorted' part of array. (Unsorted Array = Index 'i' onwards)
        for (j = i; j < numOfElements; j++) {
            if (*(arr + j) < *min) {
                // Update 'min'
                min = (arr + j);
            }
        }

        // Swap the smallest element and the element in index 'i'
        swap(min, (arr + i));

        // Re-assign 'min' to beginning of 'unsorted' array (i.e.) index position 'i + 1')
        min = (arr + i + 1);
    }

    // Output - after sorting
    printf("*** Sorted Array (Ascending Order) *** \n");
    printf("{");

    for (i = 0; i < numOfElements - 1; i++) {
        printf("%d, ", *(arr + i));
    }

    printf("%d} \n", *(arr + numOfElements - 1));

    return 0;
}

/*
Eg. [21, 3, 34, 5] (Unsorted array)
-> [3, 21, 34, 5] (Index '0' is sorted)
-> [3, 5, 34, 21] (Index '0' & '1' are sorted)
-> [3, 5, 21, 34] (Index '0', '1', '2' & '3' are sorted)
*/

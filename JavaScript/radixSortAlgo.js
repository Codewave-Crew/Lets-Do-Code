// Function to get the max value in an array
function getMax(arr) {
    let max = arr[0];
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Using counting sort to sort the elements based on significant places
function countSort(arr, exp) {
    const output = Array(arr.length).fill(0);
    const count = Array(10).fill(0);

    for (let i = 0; i < arr.length; i++) {
        count[Math.floor(arr[i] / exp) % 10]++;
    }

    for (let i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (let i = arr.length - 1; i >= 0; i--) {
        output[count[Math.floor(arr[i] / exp) % 10] - 1] = arr[i];
        count[Math.floor(arr[i] / exp) % 10]--;
    }

    for (let i = 0; i < arr.length; i++) {
        arr[i] = output[i];
    }
}

// Main Radix Sort algo function
function radixSort(arr) {
    const max = getMax(arr);

    for (let exp = 1; Math.floor(max / exp) > 0; exp *= 10) {
        countSort(arr, exp);
    }
}

// Example usage
const arr = [170, 45, 75, 90, 802, 24, 2, 66];
console.log('Array before sorting:', arr);
radixSort(arr);
console.log('Array after sorting:', arr);

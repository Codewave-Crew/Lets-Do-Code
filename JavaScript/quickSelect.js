function swap(arr, i, j) {
    const temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

function partition(arr, left, right) {
    const pivot = arr[right];
    let i = left - 1;

    for (let j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, right);
    return i + 1;
}

function quickSelect(arr, left, right, k) {
    if (left <= right) {
        const partitionIndex = partition(arr, left, right);

        if (partitionIndex === k - 1) {
            return arr[partitionIndex];
        } else if (partitionIndex < k - 1) {
            return quickSelect(arr, partitionIndex + 1, right, k);
        } else {
            return quickSelect(arr, left, partitionIndex - 1, k);
        }
    }
}

function findKthSmallest(arr, k) {
    if (k < 1 || k > arr.length) {
        return null;
    }

    return quickSelect(arr, 0, arr.length - 1, k);
}

// Example usage
const arr = [3, 1, 4, 1, 5, 9, 2, 6, 5];
const k = 3; // Find third smallest element

const kthSmallest = findKthSmallest(arr, k);
console.log(`The ${k}rd smallest element is: ${kthSmallest}`);

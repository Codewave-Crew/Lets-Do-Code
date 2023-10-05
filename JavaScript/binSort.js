// to be used within bin sort
const insertionSort =(array) => {
    const length = array.length;
    let temp, i, j;

    for (i = 1; i < length; i++) {
        temp = array[i];
        for (j = i - 1; j >= 0 && array[j] > temp; --j) {
            array[j + 1] = array[j];
        }
        array[j + 1] = temp;
    }

    return array;
}

// bin sort implementation
const binSort = (array, binSize) => {
    if (array.length === 0) {
        return array;
    }

    let i,
        minValue = array[0],
        maxValue = array[0];

    binSize = binSize || 5; // setting default size to 5

    // update min and max values
    array.forEach((val) => {
        if (val < minValue) {
            minValue = val;
        } else if (val > maxValue) {
            maxValue = val;
        }
    })

    // initialise bins
    const bucketCount = Math.floor((maxValue - minValue) / binSize) + 1;
    const allBuckets = new Array(bucketCount);

    for (i = 0; i < allBuckets.length; i++) {
        allBuckets[i] = [];
    }

    // push values to bins
    array.forEach((val) => {
        allBuckets[Math.floor((val - minValue) / binSize)].push(val);
    });

    // Sorting buckets
    array.length = 0;
    allBuckets.forEach((bin) => {
        insertionSort(bin);
        bin.forEach((item) => {
            array.push(item)
        });
    });

    return array;
}

const arr = [32,56,4,768,2,67,3456];
console.log(binSort(arr, 7));

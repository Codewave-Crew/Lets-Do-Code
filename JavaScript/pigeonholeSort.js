function pigeonholeSort(arr) {
    const min = Math.min(...arr);
    const max = Math.max(...arr);
    const pigeonholes = Array(max - min + 1).fill(0);

    // send elements into pigeonholes
    for (let i = 0; i < arr.length; i++) {
        pigeonholes[arr[i] - min]++;
    }

    // collect elements from pigeonholes
    let index = 0;
    for (let i = 0; i < pigeonholes.length; i++) {
        while (pigeonholes[i] > 0) {
            arr[index++] = i + min;
            pigeonholes[i]--;
        }
    }
}

// Example usage
const arr = [8, 3, 2, 7, 4, 6, 8];
console.log('Array before sorting:', arr);

pigeonholeSort(arr);

console.log('Array after sorting:', arr);

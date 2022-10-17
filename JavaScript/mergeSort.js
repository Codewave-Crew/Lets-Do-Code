

// write code for arbitrary manager
function helper(arr, start, end) {
    // leaf worker
    // arr of size 1 is already sorted.
    if (start === end) {
        return;
    }
    
    // find the mid
    
    let mid = Math.floor((end - start) / 2) + start;
    
    helper(arr, start, mid);
    helper(arr, mid + 1, end);
    
    // merge both the sorted arrays
    
    let i = start; let j = mid + 1;
    let aux = [];
    
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            aux.push(arr[i]);
            i++;
        } else if (arr[i] > arr[j]) {
            aux.push(arr[j]);
            j++;
        }
    }
    
    while(i <= mid) {
        aux.push(arr[i++]);
        
    }
    
    while(j <= end) {
        aux.push(arr[j++]);
    }
    
    for (let i = start, j = 0; i <= end; i++, j++) {
        arr[i] = aux[j];
    }
}
/**
 * @param {list_int32} arr
 * @return {list_int32}
 */
function merge_sort(arr) {
    // Write your code here.
    
    helper(arr, 0, arr.length - 1)
    
    return arr;
}


var array = [23, 43, 12, 56, 35];

const sortedArray = merge_sort(array);
console.log(sortedArray);

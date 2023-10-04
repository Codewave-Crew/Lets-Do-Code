function quickSort(arr) {
    // Base case: If the array has 0 or 1 elements, it's already sorted.
    if (arr.length <= 1) {
      return arr;
    }
  
    // Choose a pivot element (e.g., the first element).
    const pivot = arr[0];
  
    // Create arrays to hold elements less than the pivot and elements greater than the pivot.
    const lessThanPivot = [];
    const greaterThanPivot = [];
  
    // Iterate through the array, comparing each element to the pivot.
    for (let i = 1; i < arr.length; i++) {
      if (arr[i] <= pivot) {
        lessThanPivot.push(arr[i]);
      } else {
        greaterThanPivot.push(arr[i]);
      }
    }
  
    // Recursively sort the sub-arrays of elements less than and greater than the pivot.
    const sortedLess = quickSort(lessThanPivot);
    const sortedGreater = quickSort(greaterThanPivot);
  
    // Concatenate the sorted sub-arrays and pivot to get the final sorted array.
    return sortedLess.concat(pivot, sortedGreater);
  }
  
  
  const unsortedArray = [25, 12, 8, 32, 99, 1];
  const sortedArray = quickSort(unsortedArray);
  console.log(sortedArray);
  
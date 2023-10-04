function linearSearch(arr, target) {
    for (let i = 0; i < arr.length; i++) {
      if (arr[i] === target) {
        return i; // Return the index where the target element is found.
      }
    }
    return -1; // Return -1 if the target element is not found in the array.
  }
  
  const myArray = [4, 2, 8, 1, 6, 3];
  const targetElement = 8;
  const result = linearSearch(myArray, targetElement);
  
  if (result !== -1) {
    console.log(`Element ${targetElement} found at index ${result}`);
  } else {
    console.log(`Element ${targetElement} not found in the array`);
  }
  
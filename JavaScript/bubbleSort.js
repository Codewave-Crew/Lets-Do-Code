/**
 * 
 * @param {number[]} array array of numbers to sort by bubble sort algorithm
 * @returns {number[]} sorted array
 */
const bubbleSort = (array) => {
    const sortedArray = [ ...array ]; // copying can be avoided to perform in place sorting
    /**
     * since javascript is always pass by value and collections like array and objects are always references,
     * argument array is a reference to original array, in industrial practice we copy collections so as to avoid
     * mutated states which lead to unexpected behaviours in javascript. For the purposes of this repository, we
     * can avoid copying and go ahead with inplace modification. To do so, just comment line 7 and update the variable
     * name accordingly.
     */
    let flag = false;
    for (let i = 0; i <= sortedArray.length - 1; i++) {
        flag = false;
        for (let j = 0; j < (sortedArray.length - i - 1); j++) {

            // Check for two adjacent numbers, if first is greater than second, swap if true
            if (sortedArray[j] > sortedArray[j + 1]) {
                const temp = sortedArray[j];
                sortedArray[j] = sortedArray[j + 1];
                sortedArray[j + 1] = temp;
                flag = true;
            }
        }

        if (!flag) {
            break;
        }
    }
    return sortedArray;
}

var array = [23, 43, 12, 56, 35];

const sortedArray = bubbleSort(array);
console.log(sortedArray);

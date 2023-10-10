const arr = [45, 2, 56, 2, 5, 6, 34, 1, 56, 89, 33];
const radixSort = (arr = []) => {
  const base = 10;
  let divider = 1;
  let maxVal = Number.NEGATIVE_INFINITY;
  while (divider === 1 || divider <= maxVal) {
    const buckets = [...Array(10)].map(() => []);
    for (let val of arr) {
      buckets[Math.floor((val / divider) % base)].push(val);
      maxVal = val > maxVal ? val : maxVal;
    }
    arr = [].concat(...buckets);
    divider *= base;
  }
  return arr;
};
console.log(radixSort(arr));

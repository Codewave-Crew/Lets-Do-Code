const array = [1, 2, 3, 4, 5, 6, 7, 8, 9];
const shuffleList = (array) => array.sort(() => Math.random() - 0.5);
console.log(shuffleList(array)); // shuffle list

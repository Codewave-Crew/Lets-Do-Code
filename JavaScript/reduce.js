const values = [1,2,3];
const output = values.reduce((total, value) => total + value, 0);
console.log(output); // 6

const valuesFromObject = { obj1: {value:4}, obj2: {value:5}, obj3: {value:6} };
const outputFromObject = Object.values(valuesFromObject).reduce((total, {value}) => total + value, 0);
console.log(outputFromObject); // 15

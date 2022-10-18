let countVowel = (str) => str.match(/[aeiou]/gi)?.length ?? 0;

const string = prompt('Enter a string: ');
const result = countVowel(string);
console.log(result);
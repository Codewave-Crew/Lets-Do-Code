int factorial(int num) {
  if (num <= 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

void main() {
  int number = 5;
  int factorial = factorial(number);

  print('The factorial of $number is $factorial');
}

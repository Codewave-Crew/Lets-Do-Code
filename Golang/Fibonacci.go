package main

import "fmt"

// Fibonacci implementation in Golang
// TC - O(2*N) | SC - O(1)
func fib(val int) int {
	if val == 0 {
		return 0
	}
	if val < 0 {
		return 0
	}
	if val == 1 {
		return 1
	}
	return fib(val-2) + fib(val-1)
}

func main() {
	fmt.Println(fib(12))
	fmt.Println(fib(2))
	fmt.Println(fib(18))
	fmt.Println(fib(-21))
}

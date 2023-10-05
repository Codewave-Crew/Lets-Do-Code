package main

import "fmt"

func main() {

	var evno, i int

	fmt.Print("Enter the higher limit number = ")
	fmt.Scanln(&evno)

	fmt.Println("Even Numbers from 1 to ", evno, " = ")
	for i = 2; i <= evno; i = i + 2 {
		fmt.Print(i, "\t")
	}
	fmt.Println()
}

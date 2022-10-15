package main

import (
	"fmt"
)

func main() {
	var input string

	fmt.Print("Enter keyboard input: ")
	fmt.Scan(&input)
	fmt.Println("Inserted value:", input)
}

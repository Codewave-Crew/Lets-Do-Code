package main

import "fmt"

func main() {

    var odnum int

    fmt.Print("Enter the higher limit number = ")
    fmt.Scanln(&odnum)

    for x := 1; x <= odnum; x = x + 2 {
        fmt.Print(x, "\t")
    }
}
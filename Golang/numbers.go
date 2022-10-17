// Zero to ten in numarical and text using a loop 

package main
  
import "fmt"
  
// Main function
func main() {
      
    // Th rvariable used here is a array
    rvariable:= []string{"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"} 
      
    // a and b store the value of rvariable

    for a, b:= range rvariable {
       fmt.Println(a, b) 
    }
    
}
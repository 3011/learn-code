package main

import (
	"fmt"
)

func main() {
	// fmt.Printf("xorOperation(5, 0): %v\n", xorOperation(5, 0))
	// var a float64
	// fmt.Scanln(&a)
	// fmt.Println(a * 950 / 3e-23)

	var a, b, c float64
	a = 3e-23
	fmt.Scanln(&b)
	c = b * 950 / a
	fmt.Printf("c: %v\n", c)
}

// func xorOperation(n int, start int) int {
// 	var a int
// 	for i := 0; i < n; i++ {
// 		a ^= start + 2*i
// 	}
// 	return a
// }

package main

import (
	"fmt"
)

func min[P int|float64](x,y P)P{
	if x>y{
		return y
	}
	return x
}

func main() {
	// fmt.Printf("xorOperation(5, 0): %v\n", xorOperation(5, 0))
	// var a float64
	// fmt.Scanln(&a)
	// fmt.Println(a * 950 / 3e-23)

	// var a, b, c float64
	// a = 3e-23
	// fmt.Scanln(&b)
	// c = b * 950 / a
	// fmt.Printf("c: %v\n", c)
	fmt.Printf("min(3.3, 5.2): %v\n", min(3.4, 5.1))
	
}

// func xorOperation(n int, start int) int {
// 	var a int
// 	for i := 0; i < n; i++ {
// 		a ^= start + 2*i
// 	}
// 	return a
// }

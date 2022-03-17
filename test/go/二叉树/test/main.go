package main

import (
	"fmt"
)

func isValid(s string) bool {
	var stack []rune
	for _, v := range s {
		switch v {
		case '(':
			stack = append(stack, ')')
		case '[':
			stack = append(stack, ']')
		case '{':
			stack = append(stack, '}')
		default:
			if len(stack) > 0 {
				if v == stack[len(stack)-1] {
					stack = stack[:len(stack)-1]
				} else {
					return false
				}
			} else {
				return false
			}
		}
	}
	if len(stack) == 0 {
		return true
	} else {
		return false
	}
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
	fmt.Printf("isValid(\"([])\"): %v\n", isValid("]"))

}

// func xorOperation(n int, start int) int {
// 	var a int
// 	for i := 0; i < n; i++ {
// 		a ^= start + 2*i
// 	}
// 	return a
// }

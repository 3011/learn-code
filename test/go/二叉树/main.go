package main

import (
	"fmt"
	"log"
	"math/rand"
)

type node struct {
	data  int   // 数据域
	left  *node // 指向左子树的根结点
	right *node // 指向右子树的根结点
}

func NewNode(data int) *node {
	return &node{data: data}
}

func (nd *node) Insert(newNode *node) {
	if newNode.data == nd.data {
		return
	}

	if newNode.data > nd.data {
		if nd.right == nil {
			nd.right = newNode
		} else {
			nd.right.Insert(newNode)
		}
	} else {
		if nd.left == nil {
			nd.left = newNode
		} else {
			nd.left.Insert(newNode)
		}
	}

}

func (nd *node) Search(dt int) *node {
	if nd == nil {
		return nil
	}

	if dt == nd.data {
		return nd
	}

	if dt > nd.data {
		return nd.right.Search(dt)
	} else {
		return nd.left.Search(dt)
	}
}

func main() {
	root := NewNode(1)
	for i := 0; i < 1400; i++ {
		n := rand.Intn(500)
		log.Println("i=", i, "的随机数是", n)
		root.Insert(NewNode(n))
	}

	fmt.Printf("root.Search(21): %v\n", root.Search(1))
}

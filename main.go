package main

// #cgo LDFLAGS: -L . -lcfoo -lstdc++
// #include "cfoo.h"
//int fortyTwo() {
//	return 42;
//}
import "C"

import "fmt"

func main() {
	f := C.fortyTwo()
	fmt.Println(f)
	foo := C.FooInit()
	C.FooBar(foo)
	C.FooTest()
	C.FooFree(foo)
	
}

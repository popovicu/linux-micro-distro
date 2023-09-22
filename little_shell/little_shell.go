package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	fmt.Println("Hello world from Go!")

	reader := bufio.NewReader(os.Stdin)
	
	for {
		fmt.Print("Enter your command: ")
		line, _ := reader.ReadString('\n')
		fmt.Printf("Your command is: %s", line)
	}
}

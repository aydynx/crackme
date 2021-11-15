package main

import (
    "fmt"
)

func main() {
    var password string
    fmt.Println("password: ")
    fmt.Scan(&password)
    if password == "crackme" {
        fmt.Println("success!")
    } else {
        fmt.Println("fail.")
    }
}
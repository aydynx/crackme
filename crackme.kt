fun main(args: Array<String>) {
    val password = "crackme"
    print("password: ")
    val input = readLine()
    if (input == password) {
        println("success!")
    } else {
        println("fail.")
    }
}
use std::io;
use std::io::Write;

fn main() {
    let mut input = String::new();

    print!("password: ");
    io::stdout().flush().unwrap();

    io::stdin().read_line(&mut input)
        .expect("Failed to read line");

    if input.trim() == "crackme" {
        println!("success!");
    } else {
        println!("fail.");
    }
}
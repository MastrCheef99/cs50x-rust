use std::io;
use std::io::Write;

fn main(){
    print!("What is your name? ");
    io::stdout().flush().expect("Failed to flush");

    let mut name = String::new();

    io::stdin()
        .read_line(&mut name)
        .expect("Couldn't read line");

    println!("\nhello, {}", name);
}
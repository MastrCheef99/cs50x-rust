use std::io;
use std::io::Write;

fn main(){
    let height: i32;

    loop{
        print!("Height: ");
        io::stdout().flush().expect("Failed to flush");
        let mut rawheight = String::new();
        io::stdin()
            .read_line(&mut rawheight)
            .expect("Couldn't read line");
        match rawheight.trim().parse() {
            Ok(h) => {
                if h >= 1 && h <= 8 {
                    height = h;
                    break;
                }
            },
            Err(_) => ()
        }
    }

    for i in 1..=height{
        for _ in 1..=height-i{
            print!(" ");
        }
        for _ in 1..=i{
            print!("#");
        }
        for _ in 1..=2{
            print!(" ");
        }
        for _ in 1..=i{
            print!("#");
        }
        print!("\n");
    }

}
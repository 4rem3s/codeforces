use std::io::{self, Write};
use std::f64;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    let n: i64 = input.trim().parse().expect("Please enter a number");

    for i in 1.. {
        if i * (i + 1) > n {
            break;
        }
        let j = ((2 * n - i * (i + 1)) as f64).sqrt() as i64;
        if (i * (i + 1)) + (j * (j + 1)) == 2 * n {
            println!("YES");
            return;
        }
    }
    println!("NO");
}


use std::io;
use std::io::BufRead;

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines().map(|x| x.unwrap());

    let n: usize = lines.next().unwrap().parse().unwrap();
    let mut a: Vec<i32> = lines
        .next()
        .unwrap()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    
    a.sort();

    println!("1 {}", a[0]);
    if a[n - 1] > 0 {
        println!("1 {}", a[n - 1]);
        print!("{}", n - 2);
        for i in 1..n - 1 {
            print!(" {}", a[i]);
        }
    } else {
        println!("2 {} {}", a[1], a[2]);
        print!("{}", n - 3);
        for i in 3..n {
            print!(" {}", a[i]);
        }
    }
}


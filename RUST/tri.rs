use std::io::{self, BufRead};

fn sq(i: i32) -> i32 {
    i * i
}

fn ans(co: &[i32], str: &str) {
    let a = sq(co[0] - co[2]) + sq(co[1] - co[3]);
    let b = sq(co[0] - co[4]) + sq(co[1] - co[5]);
    let c = sq(co[4] - co[2]) + sq(co[5] - co[3]);

    if a == 0 || b == 0 || c == 0 {
        return;
    }
    if a + b == c || b + c == a || a + c == b {
        println!("{}", str);
        std::process::exit(0);
    }
}

fn main() {
    let stdin = io::stdin();
    let mut iterator = stdin.lock().lines();
    let mut co = vec![0; 6];

    if let Some(Ok(line)) = iterator.next() {
        let numbers: Vec<i32> = line
            .split_whitespace()
            .map(|s| s.parse().expect("parse error"))
            .collect();
        
        for i in 0..6 {
            co[i] = numbers[i];
        }
    } else {
        eprintln!("n/a input");
        return;
    }

    ans(&co, "RIGHT");

    for i in 0..6 {
        co[i] -= 1;
        ans(&co, "ALMOST");
        co[i] += 2;
        ans(&co, "ALMOST");
        co[i] -= 1;
    }

    println!("NEITHER");
}


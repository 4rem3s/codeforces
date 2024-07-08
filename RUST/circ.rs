use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut input = stdin.lock().lines();

    let n: usize = input.next().unwrap().unwrap().trim().parse().unwrap();

    let arr: Vec<i32> = input.next().unwrap().unwrap()
        .split_whitespace()
        .map(|s| s.trim().parse().unwrap())
        .collect();

    for i in 0..n {
        let mut x = 0;
        let mut y = 0;

        for j in (i + 2)..n {
            if (arr[j] > arr[i] && arr[j] > arr[i + 1]) || (arr[j] < arr[i] && arr[j] < arr[i + 1]) {
                x += 1;
            } else {
                y += 1;
            }

            if x != 0 && y != 0 {
                println!("yes");
                return;
            }
        }
    }
    println!("no");
}


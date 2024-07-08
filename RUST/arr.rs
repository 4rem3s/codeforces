use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("put input");
    let n: usize = input.trim().parse().expect("invalid input");

    let mut vec = Vec::with_capacity(n);

    io::stdin().read_line(&mut input).expect("input failed");
    let elements: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().expect("parse error"))
        .collect();
    vec.extend_from_slice(&elements);

    vec.sort();

    let mut set1 = Vec::new();
    let mut set2 = Vec::new();
    let mut set3 = Vec::new();

    for &element in &vec {
        if element < 0 {
            set1.push(element);
        } else if element == 0 {
            set3.push(element);
        } else {
            set2.push(element);
        }
    }

    println!(
        "{} {}",
        set1.len(),
        set1.iter()
            .map(|&x| x.to_string())
            .collect::<Vec<_>>()
            .join(" ")
    );
    println!(
        "{} {}",
        set2.len(),
        set2.iter()
            .map(|&x| x.to_string())
            .collect::<Vec<_>>()
            .join(" ")
    );
    println!(
        "{} {}",
        set3.len(),
        set3.iter()
            .map(|&x| x.to_string())
            .collect::<Vec<_>>()
            .join(" ")
    );
}


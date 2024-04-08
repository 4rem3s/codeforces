
use std::io;
 
fn main() {
    let mut n = String::new();
    io::stdin().read_line(&mut n).expect("Failed");
    
    let n: i32 = n.trim().parse().expect("Failed");
    
    for _num in 1..=n {
    let mut word = String::new();
    
    io::stdin().read_line(&mut word).expect("Failed");
    let first_char = &word[0..1];
    let count: i32 = word.trim().len() as i32;
    let last_char = &word[word.trim().len() - 1..];
    if count > 10 {
    let uwu: i32 = count - 2;
    println!("{}{}{}", first_char, uwu, last_char);
    } else {
    println!("{}", word);
    }
    }
    
    }

use std::io;
 
fn main() {
    let mut w = String::new();
    io::stdin().read_line(&mut w).expect("Failed");
    let w: i32 = w.trim().parse().expect("Failed");
    if w%2==0 && w>2 {
    println!("YES");
    }
    else {
    println!("NO");
    }
    }

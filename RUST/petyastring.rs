use std::io;
 
fn main() {
    let mut One=String::new();
    let mut Two=String::new();
    io::stdin()
        .read_line(&mut One)
        .expect("One failed");
    
    let mut lowOne = One.to_lowercase(); 
    
    io::stdin()
        .read_line(&mut Two)
        .expect("One failed");
    
    let mut lowTwo = Two.to_lowercase();    
    
    if lowOne == lowTwo {
       println!("0");
    }  
    
    else if lowOne < lowTwo {
    println!("-1");
    }
    else {
    println!("1");
    }
}

use std::io;
 
fn main() {
    let mut eqn =  String::new();
    
    io::stdin().read_line(&mut eqn).expect("failed to read input");
 
    let input = eqn.trim().to_string();
 
    let sortedString = sortString(input);
 
    let result = sortedString.chars().collect::<String>().replace("", "+").trim_matches('+').to_string();
    
    println!("{}", result);
}
 
fn sortString(mut s: String) -> String {
    let mut chars: Vec<char> = s.chars().filter(|&c| c != '+').collect();
    chars.sort();
    chars.into_iter().collect::<String>()
}

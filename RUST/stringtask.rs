use std::io;
 
fn main() {
let mut str = String::new();
 
io::stdin()
    .read_line(&mut str)
    .expect("Input invalid");
let mut binding = str.to_lowercase();    
let mut nStr = binding.trim(); 
let mut word = String::new();
 
for c in nStr.chars() {
    if c !='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y' {
    word.push('.');
    word.push(c);
    }
}
    
 
println!("{}", word.trim());
}

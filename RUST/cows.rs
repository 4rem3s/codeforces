use std::io;

fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        a
    } else {
        gcd(b, a % b)
    }
}

fn main(){
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("input?");
    let p = input.trim().parse::<u64>().expect("invalid input");
    let mut ans: u64=1;
    for i in 2..p {
        if gcd(i, p-1) == 1 {
            ans += 1;
        }
    }   

    println!("{}", ans);

}

fn greet(){
    println!("Hello world!");
    let japansese = "ハロー・ワールド";
    let arabic = "مرحبًا بالعالم";
    let regions = [japansese, arabic];
    for region in regions.iter() {
        println!("{}", &region);
    }
}

fn main() {
    greet();
}

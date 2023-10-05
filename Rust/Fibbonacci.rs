// Function to calculate Fibonacci number using recursion
fn fibonacci(n: u32) -> u32 {
    if n == 0 {
        return 0;
    } else if n == 1 {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

fn main() {
    // Change the value of 'n' to get the nth Fibonacci number
    let n = 10;

    // Call the fibonacci function and print the result
    let result = fibonacci(n);
    println!("The {}th Fibonacci number is: {}", n, result);
}

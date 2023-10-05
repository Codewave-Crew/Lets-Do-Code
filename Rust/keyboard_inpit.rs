use std::io;

fn main() {
    // Create a mutable String to store the user input
    let mut input = String::new();

    // Print a prompt to the user
    println!("Enter some text:");

    // Read user input from the keyboard and handle potential errors
    match io::stdin().read_line(&mut input) {
        Ok(_) => {
            // If reading is successful, print the input
            println!("You entered: {}", input);
        }
        Err(error) => {
            // If there's an error, print an error message
            eprintln!("Error reading input: {}", error);
        }
    }
}

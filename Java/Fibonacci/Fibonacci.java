import java.util.Scanner;

public class Fibonacci {

    // Recursive fibonacci method
    static int fibonacci(int num)
    {
        if (num <= 1)
        {
            return num;
        }

        return fibonacci(num - 1) + fibonacci(num - 2);
    }
 
    public static void main(String args[])
    {
        //Create a Scanner object
        Scanner userInput = new Scanner(System.in);

        //Get keyboard input
        System.out.print("Enter the number : ");
        int n = userInput.nextInt();

        //Print the Fibonacci total value
        System.out.println("Output : "+fibonacci(n));

        //Close the Scanner object
        userInput.close();
    }
    
}

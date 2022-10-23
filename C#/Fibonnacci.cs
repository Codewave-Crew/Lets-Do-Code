public class Fibonnacci
{
    // Returns the nth Fibonacci number
    public static int Fib(int num)
    {
        if (num <= 1)
        {
            return num;
        }
        else
        {
            return Fib(num - 1) + Fib(num - 2);
        }
    }
         
    public static void Main(string[] args)
    {
        //Get user input
        Console.WriteLine("Enter the number :");
        int num = Convert.ToInt32(Console.ReadLine());
    
        //Print the result
        Console.Write("Output : " + Fib(num));
    }
}
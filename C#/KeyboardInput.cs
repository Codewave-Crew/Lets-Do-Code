using System;

public class KeyboardInput
{
    public static void Main(string[] args)
    {
        Console.Write("Keyboard input: ");
        
        // Read keynboard input
        string input = Console.ReadLine();
        
        // Print Inserted value
        Console.WriteLine("Inserted value: " + input);
    }
}
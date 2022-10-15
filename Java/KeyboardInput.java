import java.util.Scanner;

public class KeyboardInput {

	public static void main(String[] args) {
    // Scanner Object
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter Yor Input: ");

    // Read keyboard input
    String input = scanner.nextLine();

    // Print inserted value
    System.out.println("Inserted Value: " + input);
	}
}

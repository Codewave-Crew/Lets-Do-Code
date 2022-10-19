import java.util.*; 
public class TicTacToe {
	static String[] game; 
	static String mark; 
	static String checkWinner() 
	{ 
		for (int a = 0; a < 8; a++) { 
			String line = null; 
				switch (a) { 
			case 0: 
				line = game[0] + game[1] + game[2]; 
				break; 
			case 1: 
				line = game[3] + game[4] + game[5]; 
				break; 
			case 2: 
				line = game[6] + game[7] + game[8]; 
				break; 
			case 3: 
				line = game[0] + game[3] + game[6]; 
				break; 
			case 4: 
				line = game[1] + game[4] + game[7]; 
				break; 
			case 5: 
				line = game[2] + game[5] + game[8]; 
				break; 
			case 6: 
				line = game[0] + game[4] + game[8]; 
				break; 
			case 7: 
				line = game[2] + game[4] + game[6]; 
				break; 
			} 
 
			if (line.equals("XXX")) { 
					return "X"; 
			} 
				
			else if (line.equals("OOO")) { 
				return "O"; 
			} 
		} 
		
		for (int a = 0; a < 9; a++) { 
			if (Arrays.asList(game).contains( 
					String.valueOf(a + 1))) { 
				break; 
			} 
			else if (a == 8) { 
				return "draw"; 
			} 
		} 
		System.out.println( 
				mark + "'s turn; enter a slot number to place "
			+ mark + " in:"); 
		return null; 
	} 
		
	static void printBoard() 
	{ 
		System.out.println("|---|---|---|"); 
		System.out.println("| " + game[0] + " | "
						+ game[1] + " | " + game[2] 
						+ " |"); 
		System.out.println("|-----------|"); 
		System.out.println("| " + game[3] + " | "
						+ game[4] + " | " + game[5] 
						+ " |"); 
		System.out.println("|-----------|"); 
		System.out.println("| " + game[6] + " | "
						+ game[7] + " | " + game[8] 
						+ " |"); 
		System.out.println("|---|---|---|"); 
	} 
	public static void main(String[] args) 
	{ 
		Scanner in = new Scanner(System.in); 
		game = new String[9]; 
		mark = "X"; 
		String winner = null; 
			for (int a = 0; a < 9; a++) { 
				game[a] = String.valueOf(a + 1); 
		} 
			System.out.println("Welcome to 3x3 Tic Tac Toe."); 
		printBoard(); 
			System.out.println( 
			"X will play first. Enter a slot number to place X in:"); 
			while (winner == null) { 
			int numInput; 
			
			try { 
				numInput = in.nextInt(); 
				if (!(numInput > 0 && numInput <= 9)) { 
					System.out.println( 
						"Invalid input; re-enter slot number:"); 
					continue; 
				} 
			} 
			catch (InputMismatchException e) { 
				System.out.println( 
					"Invalid input; re-enter slot number:"); 
				continue; 
			} 
 
			if (game[numInput - 1].equals( 
					String.valueOf(numInput))) { 
				game[numInput - 1] = mark; 
					if (mark.equals("X")) { 
						mark = "O"; 
				} 
				else { 
					mark = "X"; 
				} 
				printBoard(); 
				winner = checkWinner(); 
			} 
			else { 
				System.out.println( 
					"Slot already taken; re-enter slot number:"); 
			} 
		} 
		
		if (winner.equalsIgnoreCase("draw")) { 
			System.out.println( 
				"It's a draw! Thanks for playing."); 
		} 
		
		else { 
			System.out.println( 
				"Congratulations! " + winner 
				+ "'s have won! Thanks for playing."); 
		} 
	} 
}


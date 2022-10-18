// Java program for Naive Pattern Searching
public class NaiveSearch {

	static void search(String pat, String txt)
	{
		int patternLength = pat.length();
		int textLength = txt.length();

		int i = 0;
        int j = textLength - 1;

		for (i = 0, j = textLength - 1; j < patternLength;) {

			if (txt.equals(pat.substring(i, j + 1))) {
				System.out.println("Pattern found at index : "+ i);
			}
            
			i++;
			j++;
		}
	}
	
	// Driver's code
	public static void main(String args[])
	{
		String pattern = "AABAADDAFADAABAAAGBAANMAA";
		String text = "AA";
	
		// Function call
		search(pattern, text);
	}
}


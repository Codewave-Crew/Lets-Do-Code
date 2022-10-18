import java.util.Arrays;

public class BogoSort {

	// Sorts array a[0..n-1] using Bogo sort
	void bogoSort(int[] array)
	{
		// if array is not sorted then shuffle the
		// array again
		while (isSorted(array) == false){
            shuffle(array);
        }
	}

	// To generate permutation of the array
	void shuffle(int[] array)
	{
		// Math.random() returns a double positive
		// value, greater than or equal to 0.0 and
		// less than 1.0.
		for (int i = 0; i < array.length; i++){
			swap(array, i, (int)(Math.random() * i));
        }    
	}

	// Swapping 2 elements
	void swap(int[] array, int i, int j)
	{
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}

	// To check if array is sorted or not
	boolean isSorted(int[] a)
	{
		for (int i = 1; i < a.length; i++){
			if (a[i] < a[i - 1]){
                return false;
            }
        }		
		return true;
	}

	// Prints the array
	void printArray(int[] array)
	{
		for (int i = 0; i < array.length; i++){
			System.out.print(array[i] + " ");
        }    
		System.out.println();
	}

	public static void main(String[] args)
	{
		// Enter array to be sorted here
		int[] array = { 9, 2, 4, 7, 3, 7, 10};
		BogoSort ob = new BogoSort();

        System.out.println("Unsorted array: " + Arrays.toString(array));
        ob.bogoSort(array);

		System.out.print("Sorted array: ");
		ob.printArray(array);
	}
}

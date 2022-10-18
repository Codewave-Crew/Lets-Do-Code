
class BubbleSort {
	void bubbleSort(int nums[])
	{
		int n = nums.length;
		for (int i = 0; i < n - 1; i++)
			for (int j = 0; j < n - i - 1; j++)
				if (nums[j] > nums[j + 1]) {
					// swap nums[j+1] and nums[j]
					int temp = nums[j];
					nums[j] = nums[j + 1];
					nums[j + 1] = temp;
				}
	}

	/* Prints the array */
	void printnumber(int nums[])
	{
		int n = nums.length;
		for (int i = 0; i < n; ++i)
			System.out.print(nums[i] + " ");
		System.out.println();
	}

	// Driver method to test above
	public static void main(String args[])
	{
		BubbleSort ob = new BubbleSort();
		int nums[] = { 64, 34, 25, 12, 22, 11, 90 };
		ob.bubbleSort(nums);
		System.out.println("Sorted nums");
		ob.printnumber(nums);
	}
}


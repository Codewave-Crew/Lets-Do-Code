public class BinarySearchVariation {
  public static int indexOfFirstOccurrence(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target && (mid == 0 || nums[mid - 1] != target)) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
  public static void main(String[] args){
          int[] nums = {1, 3, 5, 5, 5, 7, 9};
        int target = 5;

        int indexOfFirstOccurrence = indexOfFirstOccurrence(nums, target);
    System.out.println("Index of first occurrence: " + indexOfFirstOccurrence);//2
  }
}

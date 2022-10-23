/**
 * Bin Sort or Bucket Sort Algorithm in Java
 */
import java.util.ArrayList;
import java.util.Collections;

public class BinSort {
  private float[] array;
  private int n;

  BinSort(float[] arr, int count) {
    this.array = arr;
    this.n = count;
  }

  public void sort() {
    if (n <= 0) return;
  
    @SuppressWarnings("unchecked")
    ArrayList<Float>[] bucket = new ArrayList[n];

    // create bins
    for (int i = 0; i < n; i++)
      bucket[i] = new ArrayList<Float>();

    // add items to bins
    for (int i = 0; i < n; i++) {
      int bucketIndex = (int) array[i] * n;
      bucket[bucketIndex].add(array[i]);
    }

    // sort items in each bin
    for (int i = 0; i < n; i++) {
      Collections.sort((bucket[i]));
    }

    // get the sorted array
    int index = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0, size = bucket[i].size(); j < size; j++) {
        array[index++] = bucket[i].get(j);
      }
    }
  }

  public float[] getArray() {
    return array;
  }

  /**
   * Driving Code Block
   */
  public static void main(String[] args) {
    float[] arr = { (float) 0.42, (float) 0.32, (float) 0.33, (float) 0.52, (float) 0.37, (float) 0.47, (float) 0.51 };
    BinSort binSort = new BinSort(arr, 7);
    binSort.sort();
    float[] sortedArr = binSort.getArray();

    for (float i : sortedArr)
      System.out.print(i + "  ");
  }
}
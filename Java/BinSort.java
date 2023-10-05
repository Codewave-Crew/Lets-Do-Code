/**
 * Bin Sort or Bucket Sort Algorithm in Java
 */
import java.util.ArrayList;
import java.util.Collections;

public class BinSort {
  private float[] array;
  private int n;

  BinSort(float[] arr, int size) {
    this.array = arr;
    this.n = size;
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
    float[] arr = { (float) 0.2, (float) 0.49, (float) 0.87, (float) 0.52, (float) 0.31, (float) 0.99, (float) 0.35, (float) 0.90 };
    BinSort binSort = new BinSort(arr, 7);
    binSort.sort();
    float[] sortedArr = binSort.getArray();

    for (float i : sortedArr)
      System.out.print(i + "  ");
  }
}

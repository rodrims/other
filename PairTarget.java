import java.util.HashMap;

public class PairTarget {
	public static void main(String[] args) {
		int[] arr = {1, 5, 4, 3, 8, 7, 9};
		int target = 15;
		HashMap<Integer, Integer> map = new HashMap<>();
		for (int i = 0; i < arr.length; i++) {
			map.put(arr[i], i);
		}
		for (int item : arr) {
			int diff = target - item;
			if (map.containsKey(diff)) {
					System.out.printf("Yes, %d + %d = %d, the indices are %d and %d.\n", item, diff, target, map.get(item), map.get(diff));
					return;
			}
		}
		System.out.println("No, there is no pair that sums to the target.");
	}
}


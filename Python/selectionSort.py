def selectionSort(arr):
	n = len(arr)
	for i in range(n):
		min_ind = i
		for j in range(i+1, n):
			if (arr[min_ind] > arr[j]):
				min_ind = j
		arr[i], arr[min_ind] = arr[min_ind], arr[i]
	return arr


if __name__ == '__main__':
	print(selectionSort([4, 1, 3, 9, 7]))

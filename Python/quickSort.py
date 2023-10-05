def partition(arr, l, r):
	pvt = arr[r]

	i = l-1

	for j in range(l, r):
		if (arr[j] < pvt):
			i = i+1
			arr[i], arr[j] = arr[j], arr[i]

	arr[i+1], arr[r] = arr[r], arr[i+1]
	return i+1

def quickSort(arr, l, r):
	if l < r:
		p = partition(arr, l, r)

		quickSort(arr, l, p-1)
		quickSort(arr, p+1, r)
	return arr

if __name__ == '__main__':
	print(quickSort([4, 1, 3, 9, 7], 0, 4))

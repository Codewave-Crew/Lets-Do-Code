def kadanes_algorithm(arr):
    max_current = max_global = arr[0]

    for i in range(1, len(arr)):
        max_current = max(arr[i], max_current + arr[i])
        if max_current > max_global:
            max_global = max_current

    return max_global


# Example usage
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
max_sum = kadanes_algorithm(arr)
print("Maximum contiguous sum is:", max_sum)  # Output: Maximum contiguous sum is: 6

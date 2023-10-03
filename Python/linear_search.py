def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1

my_list = [1, 5, 7, 9, 11, 13]
target_element = 9

result = linear_search(my_list, target_element)

if result != -1:
    print(f"{target_element} found at index {result}.")
else:
    print(f"{target_element} not found in the list.")

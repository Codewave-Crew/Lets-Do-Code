
def binary_search(array, target, begin=0, end=None):
    if end is None:
        # we need to put -1 because we want it to be a valid index
        end = len(array)-1
    if begin <= end:  # if I have a valid sublist, I calculate the middle of it
        m = (begin+end)//2
        if array[m] == target:
            return m
        elif array[m] < target:
            return binary_search(array, target, m+1, end)
        else:
            return binary_search(array, target, begin, m-1)
    return None


myArray = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91]
a = binary_search(myArray, 23)
print(a)

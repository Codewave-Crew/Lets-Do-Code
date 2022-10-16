import random

def bogoSort(a):
    n = len(a)
    while (is_sorted(a) == False):
        shuffle(a)

def is_sorted(a):
    n = len(a)
    for i in range(0, n-1):
        if (a[i] > a[i+1]):
            return False
    return True

def shuffle(a):
    n = len(a)
    for i in range(0, n):
        r = random.randint(0, n-1)
        a[i], a[r] = a[r], a[i]
        

def call():
    a = [9,7,2,1,3,4,8,6]
    print("Unsorted array :")
    print(*a, sep = ' ')
    bogoSort(a)
    print("Sorted array :")
    print(*a, sep = ' ')
        

call()
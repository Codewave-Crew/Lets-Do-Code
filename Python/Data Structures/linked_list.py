# first we have to create the class Node, it represents the data that will be in our list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# here we have the class for the list, initially the size is 0 and the head is empty


class LinkedList:
    def __init__(self):
        self.head = None
        self._size = 0

# this method add a new element to the list, if the list is empty our first node will be the head, if it is not empty we will traverse the list until the end and we will add the element next to the last
    def append(self, elem):
        if self.head:
            pointer = self.head
            while pointer.next:
                pointer = pointer.next
            pointer.next = Node(elem)

        else:
            self.head = Node(elem)
        self._size += 1

# this function removes an specific element from the list, we have to check if the head is empty and if the element we want to remove is the head, if it is not we have to traverse the list to find and remove the element
    def remove(self, elem):
        if self.head == None:
            raise ValueError(f'{elem} is not in the list')
        elif self.head.data == elem:
            self.head = self.head.next
            self._size -= 1
            return True
        else:
            ancestor = self.head
            pointer = self.head.next
            while pointer:
                if pointer.data == elem:
                    ancestor.next = pointer.next
                    pointer.next = None
                    self._size -= 1
                    return True
                ancestor = pointer
                pointer = pointer.next
        raise ValueError(f'{elem} is not in the list')

# this method returns the representation of the object
    def __repr__(self):
        r = ''
        pointer = self.head
        while pointer:
            r = r + str(pointer.data) + '->'
            pointer = pointer.next
        return r

    def __str__(self):
        return self.__repr__()


myList = LinkedList()
myList.append('python')
myList.append('javascript')
myList.append('java')
print(myList)
myList.remove('javascript')
print(myList)

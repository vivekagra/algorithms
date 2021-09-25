class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class linkedList:
    def __init__(self):
        self.head = None
        

if __name__=='__main__':
    llist = linkedList()
    first = Node(1)
    second = Node(2)
    third = Node(3)
    fourth = Node(4)

    llist.head = first
    first.next = second
    second.next = third
    third.next = fourth

    curr = llist.head
    while(curr is not None):
        print(curr.data)
        curr = curr.next
class Node:
    def __init__(self, key):
        self.key = key
        self.next = None
        self.pre = None
    
def printList(head):
    if(head==None):
        return
    else:
        print(head.key)
        cur = head.next
        while(cur is not None and cur is not head):
            print(cur.key)
            cur = cur.next

def push(head, key):
    node = Node(key)
    
    if(head==None):
        head = node
        head.next = head
        head.pre = head
        return head
    tail = head.pre
    tail.next = node
    node.next = head
    node.pre = tail
    head.pre = node
    return head

def insertBefore(node, key):
    pass
            
if __name__=='__main__':
    head = None
    head = push(head, 1)
    head = push(head, 2)
    head = push(head, 3)
    head = push(head, 4)
    printList(head)
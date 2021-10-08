class Node:
    def __init__(self, key):
        self.key = key
        self.next = None
        self.pre = None
    
def printList(head):
    cur = head
    while(cur is not None):
        print(cur.key)
        cur = cur.next            

def push(head, key):
    node = Node(key)
    
    if(head==None):
        head = node
        return head
    else:
        tail = head
        while(tail.next is not None):
            tail = tail.next
        tail.next = node
        node.pre = tail
        return head

def insertBefore(head, pos_node, key):
    node = Node(key)
    if(head == None):
        head = node
    elif(pos_node is None):
        pass
    else:
        if(head == pos_node):
            head.pre = node
            node.next = head
            head = node
        else:
            pre = pos_node.pre
            node.next = pos_node
            node.pre = pre
            pos_node.pre = node
            pre.next = node
    return head
        
            
if __name__=='__main__':
    head = None
    head = push(head, 1)
    head = push(head, 3)
    head = push(head, 4)
    head = push(head, 5)
    #printList(head)
    head = insertBefore(head, head.next, 2)
    printList(head)
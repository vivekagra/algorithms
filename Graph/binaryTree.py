class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


def recInorder(root):
    if(root==None):
        return
    else:
        recInorder(root.left)
        print(root.data)
        recInorder(root.right)    

root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
print(recInorder(root))
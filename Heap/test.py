from functools import cmp_to_key
def compare(item1, item2):
    if item1 < item2:
        return 1
    elif item1 > item2:
        return -1
    else:
        return 0

# Calling
ll = [1,4,3,2]
ll.sort(key=cmp_to_key(compare))
print(ll)
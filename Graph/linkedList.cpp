#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next = NULL;
};


void printList(Node* head)
{
    Node* curr;
    curr = head;
    while(curr!=NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    second->next = third;
    printList(head);
    return 0;
}

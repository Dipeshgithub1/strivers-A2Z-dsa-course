// C++  program to illustrate creation
// and traversal of Singly Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};


void printList(Node* curr) {
  
    // Iterate till n reaches NULL
    while ( curr != nullptr) {
      
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main() {
      
      //Linked List 1 -> 2 -> 3
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next = third;
    printList(head);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
     int data;
     Node* next;
     
     Node(int data){
         this -> data = data;
         this -> next = nullptr;
     }
};

void printList(Node * curr){
    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    
    head -> next = second;
    second -> next = third;
    
    printList(head);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
      Node(int data){
        this->data = data;
        this->next = nullptr;
      }


};

void printList(Node* curr){
    while(curr!=nullptr){
        cout<<curr->data<<" ";
       curr = curr->next;
    }
}

int main(){
    //linked list 1->2->-3
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next=third;
    third->next = fourth;
    printList(head);


return 0;
}
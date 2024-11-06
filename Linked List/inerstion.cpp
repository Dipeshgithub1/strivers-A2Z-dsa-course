#include <iostream>
using namespace std;

class Node {
    public:
     int data;
     Node * next;
     
      Node(int value){
          data = value;
          next = NULL;
      }
};

int main() {
  Node * Head = NULL;

  
  int arr[] = {2,3,4,5,7,9};

  //Inertion the Node at beginning

for(int i=0;i<5;i++){


  //linked does not exits 
if(Head == NULL)
{
    Head = new Node(arr[i]);
}  
//linked list exists
else {
    Node *temp;
    temp = new Node(arr[i]);
    temp ->next = Head;
    Head = temp;
}
}

//print the value
  Node *temp = Head;
  while(temp!=NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }


    return 0;
}
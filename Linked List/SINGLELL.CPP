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
  Node * Head;
  Head = new Node(4);
  
  Head -> data = 4;
  
  Head -> next = NULL;

  cout << "Data in head node : " << Head -> data << endl;

    return 0;
}
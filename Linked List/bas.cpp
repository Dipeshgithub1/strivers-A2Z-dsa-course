#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     
     public:
     Node(int data1,Node* next1){
         data = data1;
         next = next1;
     }
};

int main() {
    vector<int> arr = {2,3,5,6};
    Node* x = new Node(arr[0],nullptr);
    
    Node * y = new Node(arr[1],nullptr);
    
     Node * z = new Node(arr[2],nullptr);
    cout << x -> data<< endl;
    
    cout << y -> data << endl;
    
     cout << z -> data << endl;
    return 0;
}
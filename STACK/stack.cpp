#include <iostream>
#include<stack>
using namespace std;



int main() {
    
    //create of stacks
    stack <int > s;
    
    s.push(2);
    s.push(3);
    
    //pop
    s.pop();
     
     cout << "priting top element " << s.top() << endl;
     
     if(s.empty()){
         cout << "stack is  empty " << endl;
     }
     else { 
         cout <<"stack is not empty " << endl;

     }
    return 0;
}
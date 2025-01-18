#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stack;

    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    int num = 0;
    stack.push(num);

    stack.pop();
    stack.pop();
    stack.pop();

while(!stack.empty()){
    cout<< stack.top() << " ";
    stack.pop();
}

}



//stack::empty()


#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> stack;
    
    
    if(stack.empty()){
        cout<< "Stack is Empty" << endl;
    }
    else{
        cout<< " Stack is not empty" << endl;
    }
    stack.push(11);
    if(stack.empty()){
        cout<< "Stack is Empty" << endl;
    }
    else{
        cout<< " Stack is not empty" << endl;
    }
    
    

    return 0;
}


//size

#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> stack;
    
    
   stack.push(11);
   stack.push(13);
   stack.push(9);
   
   int n = stack.size();
   
   
   cout << " Size : " << n << endl;
    
    

    return 0;
}
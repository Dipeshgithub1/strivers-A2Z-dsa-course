#include<iostream>
#include<stack>
using namespace std;

// Stack (stack): LIFO (Last In First Out) structure, typically built using deque or vector.
int main(){
    stack<string> s;

    s.push("Dipesh");
    s.push("kumar");
    s.push("Mehra");

    cout << " Top element : "<<s.top()<<endl;

    s.pop();
    
    cout << " Top element : "<<s.top()<<endl;

    cout << " empty or not "<<s.empty()<<endl;

    cout <<"size of stack :"<<s.size()<<endl;

}
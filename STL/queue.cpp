#include<iostream>
#include<queue>
using namespace std;

//Queue : FIFO (First In First Out) structure, typically built using deque.

int main(){

queue<string> q;

q.push("Dipessh");
q.push("kumar");
q.push("mehra");

cout <<"first element : "<<q.front()<<endl;
cout << "last element : "<<q.back()<<endl;
q.pop();
cout <<"first element : "<<q.front()<<endl;

cout << "size after pop : "<<q.size()<< endl;
}
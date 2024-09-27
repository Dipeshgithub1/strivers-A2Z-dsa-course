#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("dip");
    q.push("mehra");
    q.push("kumar");

    cout<<"first element : "<<q.front()<<endl;
     cout<<"size before pop : "<<q.size()<<endl;
   q.pop();
   cout<<"first element : "<<q.front()<<endl;

   cout<<"size after pop : "<<q.size()<<endl;
}
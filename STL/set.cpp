#include<iostream>
#include<set>
//Stores unique elements in a sorted order.
//Allows efficient lookup, insertion, and deletion (logarithmic time).
using namespace std;

int main(){
set<int> s;

s.insert(1);
s.insert(3);
s.insert(9);
s.insert(0);
s.insert(10);

for(auto i : s){
    cout << i << " ";
}
cout << endl;


set<int>::iterator it = s.begin();
it++;

s.erase(it);

for(auto i : s){
    cout << i << endl;
}

cout << endl;

cout <<"1 is presemt or not : "<<s.count(1)<<endl;

cout <<"3 is presemt or not : "<<s.count(3)<<endl;

}
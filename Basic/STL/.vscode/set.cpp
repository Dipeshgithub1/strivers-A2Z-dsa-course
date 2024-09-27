#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(0);
    s.insert(28);
    s.insert(5);
    s.insert(9);
    s.insert(0);
    s.insert(28);
    s.insert(5);
    s.insert(9);

    for(auto i: s){
        cout<<i<<endl;
    }
    s.erase(s.begin());
    for(auto i: s){
        cout<<i<<endl;
    }
}
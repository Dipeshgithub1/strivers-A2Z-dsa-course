#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l(5,100);
    cout<<"printng n"<<endl;
    for(int i:l){
        cout<<i<<"";
    }
    l.push_back(2);
    l.push_front(1);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"empty or not : "<<l.empty()<<endl;

    cout<<"before erase : "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after erase : "<<l.size()<<endl;

    for(int i:l){
        cout<<i<<endl;
    }
}
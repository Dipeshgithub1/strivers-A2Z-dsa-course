#include<iostream>
#include<map>
using namespace std;
// map == Stores key-value pairs in sorted order.
//Keys are unique, and lookup, insertion, and deletion are efficient (logarithmic time).

int main(){
    map<int,string> m;

    m[0]= "Dip";
    m[1]= "mehra";
    m[2]= "kumar";


   m.insert({5,"Dieeo"});

    for(auto i:m){
        cout << i.first << " " << i.second <<endl;;
    }

    cout<<"13 is present or not "<<m.count(13)<<endl;

    cout<<"-13 is present or not "<<m.count(-13)<<endl;

    m.erase(12);
    cout<<"after erase : "<<endl;
    for(auto i: m){
        cout << i.first<< " "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it;i!=m.end();i++){
        cout <<(*i).first<<endl;

    }



}


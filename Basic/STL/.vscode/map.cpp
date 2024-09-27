#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;

    m[1]="Dip";
    m[20]="kumar";
    m[14]="mehra";

    m.insert( {5,"iic" });
cout<<"before erase :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 14: "<<m.count(14)<<endl;
    cout<<"finding 13: "<<m.count(13)<<endl;
 m.erase(14);
    cout<<"after erase :"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }


}
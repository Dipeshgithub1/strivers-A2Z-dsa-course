#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    //unoredered is conatiner its stores unique element no paricular order 
    //every operation takes t.c o(1) in average case and worst case tc is o(n)
    unordered_set<int> s;

    for(int i=1;i<10;i++){
     s.insert(i);
    }

    cout<< "present in form of undoredre"<<endl;

}
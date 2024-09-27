#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> v;
  cout<<"size : "<<v.capacity()<<endl;

 v.push_back(1);
 cout<<"size : "<<v.capacity()<<endl;

 v.push_back(2);
 cout<<"size : "<<v.capacity()<<endl;

 v.push_back(3);
 cout<<"size : "<<v.capacity()<<endl;

 cout<<"capacity : "<<v.capacity()<<endl;
 cout<<"size : "<<v.size()<<endl;

 cout<<"2nd element of vector : "<<v.at(2)<<endl;
 cout<<"1st element of vector : "<<v.at(1)<<endl;

 
 cout<<"front index : "<<v.front()<<endl;
 cout<<"back index : "<<v.back()<<endl;

  return 0;
}
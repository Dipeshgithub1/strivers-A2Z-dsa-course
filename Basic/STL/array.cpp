#include<iostream>
#include<array>
using namespace std;

int main(){
  //int basic[3] ={1,2,3};
  array<int,4> a= {1,2,3,4};
  int size =  a.size();
  for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
  }
  cout<<"Element of 2nd index :"<<a.at(0)<<endl;
  cout<<"Empty or not  :"<<a.empty()<<endl;

  cout<<"first element of array :"<<a.front()<<endl;
  cout<<"last element of array :"<<a.back()<<endl;
  return 0;
}
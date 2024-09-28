//vector
#include<iostream>
#include <vector>
using namespace std;

int main(){
    
  vector<int> v;

  cout << "capacity :" << v.capacity() << endl;
  cout << " size : " << v.size() << endl;

  v.push_back(1);
  cout << "capacity :" << v.capacity() << endl;
  cout << " size : " << v.size() << endl;

  v.push_back(2);
  cout << "capacity :" << v.capacity() << endl;
  cout << " size : " << v.size() << endl;

  v.push_back(3);
  cout << "capacity :" << v.capacity() << endl;
  cout << " size : " << v.size() << endl;

  cout << "element at 2nd index : "<<v.at(2)<< endl;

  cout << "empty or not : "<<v.empty()<< endl;

  cout << "first element : " <<v.front()<< endl;

  cout << "last element : " <<v.back()<< endl;

  }
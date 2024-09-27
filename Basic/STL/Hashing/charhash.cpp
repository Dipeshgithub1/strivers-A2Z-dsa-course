#include<iostream>
using namespace std;

int f(string a[],string s,int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]== s){
            count = count+1;
        }
    }
    return count;
}

int main(){
    string a[10] = {"apple", "banana", "cherry", "apple", "date", "fig", "grape", "apple", "banana", "cherry"};
  string s;
  cout<<"enter the string to cont : ";
  cin >> s;
  int count = f(a,s,10);

  cout<<"count of " <<s<< "in the array is count :" <<count <<endl;
 
}
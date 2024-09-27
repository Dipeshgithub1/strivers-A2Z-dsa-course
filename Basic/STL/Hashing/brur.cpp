#include<iostream>
using namespace std;

int BruHash(int number,int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
      if(a[i]==number){
        count=count + 1;
      }
    }
    return count;

}

int main(){
int a[6]={1,2,1,2,3,2};
int n;
cin>>n;
int count = BruHash(n,a,6);
cout<<"count of " << n << " in the array is : "<<count<<endl;

}
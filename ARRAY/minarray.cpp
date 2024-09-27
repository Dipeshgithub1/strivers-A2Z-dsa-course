#include <bits/stdc++.h>
using namespace std;

int minArray(int arr[],int n){
  int min = arr[0];

  for(int i=1;i<n;i++){
    if(min > arr[i]){
      min = arr[i];
    }
    
  }
  return min;
}


int main(){
  int arr1[] = {2,5,1,3,0};
  int n1 = 5;
  int min1 = minArray(arr1,n1);

  cout<<"minimum element in array : " <<min1<<endl;


  int arr2[] = {8,10,5,7,9};
  int n2 = 5;
  int min2 = minArray(arr2,n2);

  cout<<"minimum element in array : " <<min2<<endl;
}

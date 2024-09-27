#include <iostream>
using namespace std;

bool binSearch(int arr[],int s,int e,int k){

//base case
  if(s > e)
    return false;
  int mid = s + (e - s)/2;

  if(arr[mid] == k){
    return true;
  }
  
  if(arr[mid] < k){
   return  binSearch(arr, mid+1,e,k);
  }
else{
  return binSearch(arr,s,mid-1,k);
}
}


int main() {
  int arr[6] = {2,4,6,10,14,16};
  int size = 6;
  int key = 19;

  cout << "present or not : " << binSearch(arr,0,size -1,key);
}
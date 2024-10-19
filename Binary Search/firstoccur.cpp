#include <iostream>
using namespace std;

int firstOccu(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] ==key ){
            ans = mid;
            end = mid -1;
        }
        else if(arr[mid] > key) {//right 
        start = mid + 1;
        }
        else if(arr[mid] < key) {//left
             end = mid - 1;   
            
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    // Write C++ code here
    int even[5]={1,2,3,3,5};
    
  int index = firstOccu(even,5,3);
  
  cout << "3 is occurence : "<<index<<endl;

    return 0;
}
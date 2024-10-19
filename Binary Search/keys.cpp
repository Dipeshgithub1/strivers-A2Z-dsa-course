#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    
    int mid = start + (end - start)/2;
    
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        //go to right 
        if(key > arr[mid]){
            start = mid + 1;                  //T.C == O(logn)
        }
        else{
            end = mid -1;
        }
        mid = start + ( end - start )/2;
    }
    return -1;
}






int main() {
    // Write C++ code here
     int even[6]= {2,4,6,8,12,18};
     int odd[6]={3,5,7,9,11,13};
     
     int index = binarySearch(even,6,12);
     int odindex = binarySearch(odd,6,9);
     
     cout << " index of 12 is " << index << endl;
     cout << " index of 9 is : "<< odindex << endl;
    return 0;
} 
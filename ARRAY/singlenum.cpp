#include <iostream>
#include<vector>
using namespace std;

//O(n^2) Time and O(1) Space

int findSingle(const vector<int>&arr){

 for(int i=0;i<arr.size();i++){
     int count =0;
     for(int j=0;j<arr.size();j++){
         if(arr[i] == arr[j]){
             count++;
         }
     }
     if(count == 1){
         return arr[i];
     }
 }  
 return -1;

}
/*
// XOR all elements and return the result               // XOR all elements and return the result
    int res = arr[0];
    for (int i = 1; i < arr.size(); i++)
        res ^= arr[i];

    return res;
}
*/


int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    cout<<findSingle(arr)<<endl;;
    
    
    return 0;
}
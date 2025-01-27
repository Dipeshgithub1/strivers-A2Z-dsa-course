//Using Two Pointers Technique – O(n^2) Time and O(1) Space

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int countTraingles(vector<int>&arr){
    int res =0;
    
    sort(arr.begin(),arr.end());
    
    for(int i=2;i<arr.size();++i){
        int left = 0,right = i-1;
        while(left < right){
            if(arr[left] + arr[right] > arr[i]){
                res += right - left;
                right--;
                
            }
            else{
                left++;
            }
        }
    }
    return res;
}

int main() {
    vector<int> arr = {4,6,3,7};
    cout<< countTraingles(arr);
    
    return 0;
}
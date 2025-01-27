//Print all Distinct (Unique) Elements in given Array
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> findDistinct(vector<int>&arr){
    vector<int> res;
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    
    for(int i=0;i<n;i++){                                 //Sorting – O(n*logn) Time and O(1) Space
        if(i==0 || arr[i] != arr[i-1]){
            res.push_back(arr[i]);
        }
        
        
       
    }
     return res;
}


int main() {
    vector<int> arr = {12, 10, 9, 45, 2, 10, 10, 45};
    vector<int> res = findDistinct(arr);
    
    for(int ele : res)
        cout << ele << " ";
    
    return 0;
}
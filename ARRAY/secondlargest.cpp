#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//complexity = (n*logn + n) = O(n*logn)
int getSecondLarge(vector<int> &arr){
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    
    for(int i = n-2; i>=0;i--){
        if(arr[i] != arr[n-1]){
            return arr[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {12,35,1,10,34,1};
    cout<< getSecondLarge(arr);

    return 0;
}
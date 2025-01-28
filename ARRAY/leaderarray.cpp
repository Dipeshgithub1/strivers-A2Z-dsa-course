#include <bits/stdc++.h>
using namespace std;


vector<int> leaders(vector<int>& arr) {
    vector<int> res; 
    int n = arr.size();

    
    int maxRight = arr[n - 1]; 

    
    res.push_back(maxRight); 
    
    
    for (int i = n - 2; i >= 0; i--) {

        if (arr[i] >= maxRight) {
            maxRight = arr[i]; 
            res.push_back(maxRight); 
        }
    }

    reverse(res.begin(), res.end());
    
    return res; 
}

int main() {
    vector<int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> res = leaders(arr);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
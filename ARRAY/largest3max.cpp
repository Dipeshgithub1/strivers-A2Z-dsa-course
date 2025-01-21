//Largest three distinct elements in an array

//Time Complexity: O(n)
//Auxiliary Space: O(1)


#include <bits/stdc++.h>
using namespace std;

vector<int> get3largest(vector<int> &arr) {
    int fst = INT_MIN, sec = INT_MIN, thd = INT_MIN;
    
    for(int x : arr){
        if(x > fst){
            thd = sec;
            sec = fst;
            fst = x;
        }
        else if(x > sec && x != fst){
            thd = sec;
            sec = x;
        }
        else if(x > thd && x != sec && x != fst){
            thd = x;
        }
    }
    
    vector<int> res;
    if (fst != INT_MIN) res.push_back(fst);
    if (sec != INT_MIN) res.push_back(sec);
    if (thd != INT_MIN) res.push_back(thd);

    return res;
}

int main() {
    vector<int> arr = {12,13,1,10,34,1};
    vector<int> res = get3largest(arr);
    
    for(int x : res){
        cout<< x << " ";
        
    }
    cout<<endl;

    return 0;
}
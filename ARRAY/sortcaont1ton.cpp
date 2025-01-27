#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr = {4,5,8,6,9,3,2,1};

    sort(arr.begin(),arr.end());

    for(int x : arr){
        cout<< x << " ";
    }
    return 0;
}
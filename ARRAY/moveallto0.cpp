#include<bits./stdc++.h>
using namespace std;

void pushZerotoend(vector<int> &arr){
    int count =0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]!= 0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(){
    vector<int> arr = {1,20,4,9,0,0,5,0};
    pushZerotoend(arr);
    for(int num: arr){
    cout<< num <<" ";
    }

}


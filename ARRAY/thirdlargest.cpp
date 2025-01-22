#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int thirdlargest(vector<int> &arr){
    int n = arr.size();

    int largest = -1,second2 = -1, third3 = -1;


    //largest
    for(int i=0;i<n;i++){
        if(arr[i] > largest)
        largest = arr[i];
    }
    
    for(int i =0;i<n;i++){
     if(arr[i] > second2 && arr[i]!= largest)
        second2= arr[i];
    }
    

    for(int i=0;i<n;i++){
        if(arr[i] > third3 && arr[i]!=second2 && arr[i]!= largest)
        third3 = arr[i];
    }
    return third3;
}



int main(){
vector<int> arr = {13,14,35,25,21,27};
cout<<thirdlargest(arr);

}
// C++ Program to calculate the sum of first N natural
#include<iostream>
using namespace std;

int nSum(int n){
    //base case 
    if(n ==0){
        return 0;
    }
    int ans = n + nSum(n-1);
    return ans;
}

int main(){
    int n =5;

    int sum = nSum(5);

    cout <<"Sum is " << sum;
    return 0;
}
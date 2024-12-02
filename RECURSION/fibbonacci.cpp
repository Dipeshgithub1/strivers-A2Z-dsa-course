#include<iostream>
using namespace std;

int fibo(int n){
    //base case
    if(n == 0){
        return 0;
    }
    if(n==1 || n==2){
        return 1;
    }
    int ans = fibo(n-1) + fibo(n-2);
    return ans;
}


int main(){
    int n;
    cin >> n;

    cout << " print of fibonacci series : ";
    for(int i=0;i<n;i++){
       cout << fibo(i) << " ";
    }
    return 0;

}
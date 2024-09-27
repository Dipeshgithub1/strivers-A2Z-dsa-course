#include<iostream>
using namespace std;

void fun(int i,int n){
    //base case
    if(i > n){
        return;
    }
    cout << i <<endl;
    fun(i+1,n);
}

int main(){
    int n;
    cin >> n;

    fun(1,n);


}
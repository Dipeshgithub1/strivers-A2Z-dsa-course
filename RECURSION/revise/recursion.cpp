#include<iostream>
using namespace std;
/*
int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin >> n;
    cout<<"sum of first "<<n<< " is : ";
    cout<<sum(n);


}

*/

int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin >> n;
    cout<<"factorial of first  "<<n<< " is : ";
    cout<<fact(n);    

}
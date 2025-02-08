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


 void printFun(int test){
    if(test < 1){
        return;
    }
    else{
        cout<<test << " ";
        printFun(test - 1);
        cout<<test << " ";
        return;
    }
 }
 
 int main(){
    int test = 3;
    printFun(test);

 }
    */

int fibo(int n){
    //base case
    if(n == 0){
        return 0;
    }
    else if(n ==1 || n==2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}    
 int main(){
    int n;
    cout <<"Fibonacci series  numbers is : ";
    cin >> n;
    cout<<"Fibonacci series of "<< n <<" numbers is : ";
    for(int i=0;i<n;i++){
        cout<<fibo(i) << " ";
    }

 }   
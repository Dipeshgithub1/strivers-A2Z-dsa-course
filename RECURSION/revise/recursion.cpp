#include <bits/stdc++.h>
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

*/

int factorialRecursion(int n){
    if(n==0){
        return 1;
    }
    return n * factorialRecursion(n-1);
}
// iteration
int factorialIteration(int n){
    int res = 1,i;
    
    for(i=2;i<=n;i++)
    res *= i;
    return res;
}

int main() {
    int num =5;
    cout<<"Fcatorial of " << num <<"using Recursion : "<< factorialRecursion(5) << endl;
    cout<<"Factorial of " << num << "using Iterartion is : " << factorialIteration(5);

    return 0;
}
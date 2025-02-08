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
cout<<"enter is number : ";
cin >> n;
cout<<"enter number is : "<<n <<endl;

cout <<"sum of first "<< n  <<" natural number is : " <<sum(n) << endl;;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
int n;
cout<<"Enter number : ";
cin >> n;
cout<<"Enter number is : "<<n <<endl;
cout <<"fact of first of  " << n << " factorial number is : " << fact(n) << endl;

}


void printTest(int test){
 if(test < 1){
    return;
 }
 else{
    cout << test << " ";
    printTest(test-1);
    cout << test << " ";
    return;
 }
}

int main(){
int test =3;
printTest(test);
}
*/
int fibo(int n){
    if(n == 0){
        return 0;
    }
    else if( n==1 || n==2){
        return 1;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
int n;
cout <<"Enter number is : ";
cin >> n;
cout<<"Fibonacci series of 5 numbers is: ";
for(int i=0;i<n;i++){
cout<<fibo(i)<< " ";
}

}
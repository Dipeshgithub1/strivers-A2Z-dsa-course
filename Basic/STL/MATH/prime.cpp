#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 0;

    for(int i=1;i<=n;i++){
        if(n % i == 0){
            count ++;
        }
        
        }
    if(count == 2){
    cout<<"is prime number"<<endl;
    }
    else{
         cout<<"is not prime number"<<endl;
        }

        return 0;
    }

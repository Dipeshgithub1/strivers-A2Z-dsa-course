#include<iostream>
using namespace std;

int revNumberraise(int N,int R){
    int ans =1, mod = 1e9 + 7;

    for(int i=0;i<R;i++){
        ans *= N;
        ans %= mod;
    }
    return ans;
}

int main(){
    int N= 57,R=75;
    cout<<revNumberraise(N,R);

}
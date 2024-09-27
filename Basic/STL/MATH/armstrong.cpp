#include<iostream>
using namespace std;

int main(){
    int sum =0;
    int n;
    cin >> n;
    int dup = n;

    while(n > 0){
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
       int revN = (revN * 10) + ld;
        n = n/ 10;

    }
    if(sum == dup){
        cout << "The number " << dup << " is armstrong." << endl;
    }
    else{
        cout << "The number " << dup << " is not armstrong." << endl;
    }
}
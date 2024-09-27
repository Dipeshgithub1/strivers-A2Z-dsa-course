#include<iostream>
using namespace std;

int main(){
    int n,revN=0;
    cin >> n;
    int dup = n;
    
    while(n > 0){
        int ld = n % 10;
        revN = (revN * 10) + ld;
        n = n/10;
    }
     if(revN == dup){
        cout << "The number " << dup << " is a palindrome." << endl;
     }
     else{
        cout << "The number " << dup << " is not palindrome." << endl;
     }

}
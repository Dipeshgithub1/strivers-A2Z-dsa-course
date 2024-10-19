#include <iostream>
using namespace std;

int main(){
    int n,even_sum = 0,odd_sum = 0;
    cin>> n;
    while(n > 0){
    int digits = n % 10;
    if(digits  % 2 == 0){
        even_sum += digits;
    }
    else{
        odd_sum += digits ;
    }
    n = n / 10;
    }
    cout << " sum of even digits :" << even_sum << endl;
    cout << " odd of even digits :" << odd_sum << endl;
    
}
                                
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countDigits(int n){
    int count = 0;
    while(n > 0){
        
        count = count + 1;
        n = n / 10;
    }
    return count;
}



int main() {
    int N;
    cin>>N;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}

                                
                            
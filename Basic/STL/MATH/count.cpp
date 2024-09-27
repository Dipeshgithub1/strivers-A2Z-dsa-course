#include<iostream>
using namespace std;

int Countdigit(int n){
    int count = 0;
    while(n > 0){
        count = count + 1;
        n = n / 10; // Correctly update n to remove the last digit
    }
    return count;
}

int main(){
    int N;
    cin >> N;
    int digits = Countdigit(N);
    cout << "Number of digits in " << N << " is " << digits << endl;
    return 0;
}

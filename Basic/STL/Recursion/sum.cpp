#include<iostream>
using namespace std;

void solve(int n){
    int sum =   n * (n + 1)/2;

    cout << "the sum of the first : "<< n <<" number is : "<<sum <<endl;
}

int main(){

    solve(5);
    solve(10);

}
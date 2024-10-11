#include<iostream>
using namespace std;

class Solve{
    private:
    int a;
    int b;
 public:
    int solve(int input){
    a= input;
    b = a/2;
    return b;
    };
};

int main(){
    int n;
    cin>>n;
    Solve half;
    int ans = half.solve(n);
    cout<< ans <<endl;
    return 0;
}
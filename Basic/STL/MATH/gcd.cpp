#include<iostream>
using namespace std;

int main(){
    int n1,n2;
  cin>>n1;
  cin>>n2;
  int gcd =1;
  for(int i=1;i<=min(n1,n2);i++){
    if(n1 % i ==0 && n2 % i==0){
       gcd=i;
    }
  }
  cout << "GCD of " << n1 << " and " << n2 << " is " << gcd << endl;
    return 0;
}
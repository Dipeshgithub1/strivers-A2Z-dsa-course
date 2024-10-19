#include<iostream>
using namespace std;

int  twoSum(int num1,int num2){
    int num3 = num1 + num2;
    return num3;
    
}
int main(){
  int num1,num2;
  cin>>num1 >> num2;
  int res = twoSum(num1,num2);

  cout<<res;
    return 0;

}
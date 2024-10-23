#include<iostream>
using namespace std;

class Gods{
    public: 
      void func(int x){
        cout << "value of x is : " << x << endl;
      }

    void func(double x){
        cout << "value of x is double " << x << endl;
    }  

    void func(int x,int y){
        cout <<"value of x and y is " << x << " ," << y << endl;
    }

};

int main(){
Gods obj1;

obj1.func(34);

obj1.func(76.09);

obj1.func(65,90);

    return 0;
}
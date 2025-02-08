#include<iostream>
using namespace std;

int fun(int x,int y){
    if(x == 0){
        return y;
    }
    else{
        return fun(x-1,x + y);
    }
}

int main(){
int x,y;
cin >> x >> y;
cout << "Entered x: " << x << ", y: " << y << endl;
cout << "Result of fun(x, y): " << fun(x, y) << endl;
fun(x,y);
}
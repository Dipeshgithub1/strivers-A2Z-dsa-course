#include<iostream>
using namespace std;

class number{
    public:
     void printNos(unsigned int n){
        //base case
        if(n > 0){

            cout << n << " ";
            printNos(n-1);
            
        }
        return;
     }
};

int main(){
    int n;
    number g;
    cin >> n;
    cout<<"n to 1 is : ";
    g.printNos(n);
    return 0;
}
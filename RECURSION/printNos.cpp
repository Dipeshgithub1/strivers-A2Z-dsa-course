#include<iostream>
using namespace std;

class number{
    public:
     void printNos(unsigned int n){
        //base case
        if(n > 0){
            printNos(n-1);
            cout << n << " ";
        }
        return;
     }
};

int main(){
    int n;
    number g;
    cin >> n;
    cout<<"1 to n is : ";
    g.printNos(n);
    return 0;
}

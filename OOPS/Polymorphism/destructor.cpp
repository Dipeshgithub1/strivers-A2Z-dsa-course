#include <iostream>
using namespace std;

class Customer {
   public:
    string name;
    int *data;
    
    public:
    Customer(){
        name = "Rohit";
        data = new int;
        *data = 10;
        cout << "constructor is called\n ";
    }
    //Destructor
    ~Customer(){
        cout <<"Destructor is called\n";
    }
};

int main() {
    Customer A1;

    return 0;
}
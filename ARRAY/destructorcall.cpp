#include <iostream>
using namespace std;

class Customer {
   public:
    string name;
    int *data;
    
    public:
    Customer(string name){
       this->name = name;
        cout << "constructor is called : " <<name << endl;;
    }
    //Destructor
    ~Customer(){
        cout <<"Destructor is called : " <<name<<endl;
    }
};

int main() {
    Customer A1("1"),A2("2"),A3("3");

    return 0;
}
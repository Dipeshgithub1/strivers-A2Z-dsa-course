#include <iostream>
using namespace std;

class Base {
    public: 
       //data member
       int publicVar;
       
       //member function
       void display(){
           cout << "value of publicVar : "<<publicVar<< endl;
       }
};

class Derived : public Base{
public:
    void displayMember(){
        display();
    }
    void modifyMember(int pub){
        publicVar = pub;
    }
    
};


int main() {
    Derived d1;
    
    d1.modifyMember(10);
    
    d1.displayMember();

    return 0;
}
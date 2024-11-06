// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class base {
    public:
      virtual void print(){
          cout <<"Print base class \n";
      }
      void show(){
          cout << "show base class\n";
      }
};

class derived : public base {
    public :
     void print(){
         cout << "print derived class\n";
     }
     void show(){
         cout << "show drived class\n";
     }
};

int main() {
    base* bptr;
    derived d;
    bptr = &d;
    
    //virtual function , binded at runtime
    bptr -> print();
    
    //non-virtual function, binded at compile time
    
    bptr -> show();

    return 0;
}
/*

Hierarchical Inheritance
 more than one subclass is inherited from a single base class. 
 i.e. more than one derived class is created from a single base class.
*/



#include <iostream>
using namespace std;

//base case

class Vehicle {
public: 
   Vehicle(){
       cout<< " This is a vehicle \n";
   }
};

class Car : public Vehicle{
    public: 
       Car(){
    cout<< " This is a car \n";
       }
};

class Bus : public Vehicle {
    public: 
       Bus(){
           cout<< "This is a Bus \n";
       }
};

int main() {
    Car obj1;
    Bus obj2;
    
    return 0;
}
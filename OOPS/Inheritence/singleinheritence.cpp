
/* Types Of Inheritance in C++
In C++, we have 5 types of inheritances:

Single inheritance
Multilevel inheritance
Multiple inheritance
Hierarchical inheritance
Hybrid inheritance
1. Single Inheritance
In single inheritance, a class is allowed to inherit from only one class. i.e. one base class is inherited by one derived class only.

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

class Car : public Vehicle {
    public: 
       Car(){
           cout<< "This is Vehicle is car \n";
       }
};

int main() {
    Car c1;
    
    return 0;
}
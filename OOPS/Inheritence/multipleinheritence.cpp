/*
Multiple Inheritance is a feature of C++ 
where a class can inherit from more than one class. 
i.e one subclass is inherited from more than one base class
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

class FourWheeler{
    public: 
       FourWheeler(){
    cout<< " This is a 4 wheeler vehicle \n";
       }
};

class Car : public Vehicle,public FourWheeler {
    public: 
       Car(){
           cout<< "This is 4 wheeler Vehicle is car \n";
       }
};

int main() {
    Car c1;
    
    return 0;
}
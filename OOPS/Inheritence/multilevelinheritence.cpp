/*
Multilevel Inheritance 
a derived class is created from another derived class and that 
derived class can be derived from a base class or any other derived class. 
There can be any number of levels
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

class FourWheeler : public Vehicle{
    public: 
       FourWheeler(){
    cout<< " 4 wheeler vehicle \n";
       }
};

class Car : public FourWheeler {
    public: 
       Car(){
           cout<< "4 wheeler Vehicle is car \n";
       }
};

int main() {
    Car c1;
    
    return 0;
}
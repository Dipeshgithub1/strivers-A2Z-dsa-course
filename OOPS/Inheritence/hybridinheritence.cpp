/*
Hybrid Inheritance is implemented by combining more than one type of inheritance.
 For example: Combining Hierarchical inheritance and Multiple Inheritance will create hybrid inheritance in C++

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
class Fare {
    public:
    Fare(){
        cout << "This is car fare and vehicle\n";
    }
};

class Car : public Vehicle{
    public: 
       Car(){
    cout<< " This Vehicle is a car \n";
       }
};

class Bus : public Vehicle,public Fare {
    public: 
       Bus(){
           cout<< "This is a Bus with fare  \n";
       }
};

int main() {
    Bus obj2;
    
    return 0;
}
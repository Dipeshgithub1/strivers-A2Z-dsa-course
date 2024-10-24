#include <iostream>
using namespace std;


class Vehicle{
    
    private:
     void piston(){
         cout << "4 pistom\n";
     }
     void  manwhoMade(){
         cout << "Markus Librette\n";
     }
     
     public:
     void company(){
         cout <<"Range Rover\n";
     }
     void model(){
         cout <<"Simple\n";
     }
     void color()
        {
            cout<<"Red/GREEN/Silver\n";
        }
        void cost()
        {
            cout<<"Rs. 600000 to 900000\n";
        }
        void oil()
        {
            cout<<"PETROL\n";
        }
    
};

int main() {
  Vehicle obj;
  obj.company();
  obj.model();
  obj.color();
  obj.cost();
  obj.oil();



}
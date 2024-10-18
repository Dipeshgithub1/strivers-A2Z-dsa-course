#include <iostream>
using namespace std;

class parent {
    public: 
     int id_p;
    void printID_p(){
        cout <<"Base ID: "<<id_p << endl;
    }
    
};

class child : public parent {
 public: 
      int id_c;
      void printID_c(){
          cout << "Child ID : "<< id_c << endl;
      }
};

int main() {
    parent  p1;
    child c1;
    
    c1.id_p = 7;
    c1.printID_p();
    
    p1.id_p = 6;
    p1.printID_p();
    
    c1.id_c = 10;
    c1.printID_c();

    return 0;
}
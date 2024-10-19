//Encapsulation is defined as wrapping up data and information under a single unit.

#include<iostream>
using namespace std;

class Student {
  
  private:
    string name;
    int age;
    int height;

public:
   int getAge(){
    return this->age;
    };
};

int main(){

    Student first;

    cout<<"encapsulation is working";
    return 0;
}
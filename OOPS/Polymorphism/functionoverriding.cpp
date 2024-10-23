#include <iostream>
using namespace std;
//Polymorphism
// Run- Time Polymorphism
// funtion overrriding

class Animal {
    public: 
      string color = "Black";

};
class Dog : public Animal {
    public: 
     string color = "Grey";
};

int main(void) {
  Animal d = Dog();
  cout << d.color;

    return 0;
}
//Abstraction means displaying only essential information and ignoring the details.

#include <iostream>
using namespace std;

class impleAbstract{
    private:
      int a,b;
      
     public:
      void set(int x,int y){
          a = x;
          b = y;
      }
      void display(){
          cout << "a = "<<a << endl;
          cout << "b = "<<b << endl;
      }
};

int main() {
  impleAbstract obj;
  obj.set(10,56);
  obj.display();


return 0;
}
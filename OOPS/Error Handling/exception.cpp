#include <iostream>
using namespace std;

int main() {
  int x = -1;
  
  cout <<"before try \n";
  
  //try block
  try {
      cout <<"inside try\n";
      if(x < 0){
          throw x;
          cout << "after throw (never executed \n";
      }
      }
      //cattch block
      catch(int x){
          cout << "Exception caught\n";
          
      }
      cout << " after catch(will be executed)\n";

    return 0;
}
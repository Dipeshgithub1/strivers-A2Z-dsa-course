#include <iostream>
#include<stdexcept>
using namespace std;

int main() {
  try{
      int num = 10;
      int denom = 0;
      int res;
      
      //check if denum is o then throw runtime error
      if(denom ==0){
          throw runtime_error("Division by zero not allowed");
      }
      
      //calculate result if no excption occurs
      res = num/denom;
      cout << "Result after divison: " << res << endl;
  }
  //catch
  catch(const exception& e){
      cout << "EXception " << e.what() << endl;
      
  }

    return 0;
}
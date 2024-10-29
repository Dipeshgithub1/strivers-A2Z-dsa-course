//Properties of Exception Handling in C++

//Property 1
//There is a special catch block called the ‘catch-all’ block, written as catch(…), that can be used to catch all types of exceptions.

#include <iostream>
using namespace std;

int main() {
    //try block
    try{
        throw 10;
    }
    //catch block
    catch(char* exp){
     cout << "Caught " << exp;
    }
   
   //catch all
   catch(...){
       cout << "Default Exception\n";
   }

    return 0;
}

//property 2: Implicit type
// conversion doesn't happen for primitive types.
// in exception handling.

#include <iostream>
using namespace std;

int main()
{
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Caught " << x;
    }
    catch (...) {
        cout << "Default Exception\n";
    }
    return 0;
}


//property 3: If an exception is
// thrown and not caught anywhere, the program terminates

#include <iostream>
using namespace std;

int main()
{
    try {
        throw 'a';
    }
    catch (int x) {
        cout << "Caught ";
    }
    return 0;
}


 //property 4 in exception
// handling.

#include <iostream>
using namespace std;


void fun(int* ptr, int x)
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}

int main()
{
    try {
        fun(NULL, 0);
    }
    catch (...) {
        cout << "Caught exception from fun()";
    }
    return 0;
}

// C++ program to demonstate property 4 in better way

#include <iostream>
using namespace std;

// Here we specify the exceptions that this function
// throws.
void fun(int* ptr, int x) throw(
    int*, int) // Dynamic Exception specification
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}

int main()
{
    try {
        fun(NULL, 0);
    }
    catch (...) {
        cout << "Caught exception from fun()";
    }
    return 0;
}

//properties 5
// C++ program to demonstrate try/catch blocks can be nested
// in C++

#include <iostream>
using namespace std;

int main()
{

    // nesting of try/catch
    try {
        try {
            throw 20;
        }
        catch (int n) {
            cout << "Handle Partially ";
            throw; // Re-throwing an exception
        }
    }
    catch (int n) {
        cout << "Handle remaining ";
    }
    return 0;
}

//Property 6
#include <iostream>
using namespace std;

class Test {
    public:
    Test(){
        cout <<"Constructor of Test " << endl;
    }
    ~Test(){
        cout << "Destructor of test " << endl;
    }
};


int main()
{

        try{
         Test t1;
         throw 10;
    }
    catch (int i) {
        cout << "caught "<<i<<endl;;
        throw;
    }
   
    return 0;
}
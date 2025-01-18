// C++ program to illustrate how to use
// stack::empty() function
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
  
      // Checking if the stack st is empty
    if (st.empty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is NOT Empty" << endl;

    // Inserting an element
    st.push(11);

      // Again checking if the stack st is empty
    if (st.empty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is NOT Empty" << endl;

    return 0;
}
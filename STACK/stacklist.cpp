// C++ implementation of stack 
// using list STL 
#include <bits/stdc++.h> 
using namespace std; 

template <typename T> 
// templating it so that any data type can be used 

class Stack { 
public: 
	list<T> l; 
	int cs = 0; 
	// current size of the stack 

	// pushing an element into the stack 
	void push(T d) 
	{ 
		cs++; 
		// increasing the current size of the stack 
		l.push_front(d); 
	} 

	// popping an element from the stack 
	void pop() 
	{ 
		if (cs <= 0) { 
			// cannot pop us stack does not contain an 
			// elements 
			cout << "Stack empty" << endl; 
		} 
		else { 
			// decreasing the current size of the stack 
			cs--; 
			l.pop_front(); 
		} 
	} 

	// if current size is 0 then stack is empty 
	bool empty() { return cs == 0; } 

	// getting the element present at the top of the stack 
	T top() { return l.front(); } 
	int size() 
	{ 
		// getting the size of the stack 
		return cs; 
	} 

	// printing the elements of the stack 
	void print() 
	{ 
		for (auto x: l) { 
			cout << x << endl; 
		} 
	} 
}; 
int main() 
{ 
	Stack<int> s; 
	s.push(10); // pushing into the stack 
	s.push(20); 
	s.push(30); 
	s.push(40); 
	cout << "Current size of the stack is " << s.size() 
		<< endl; 
	cout << "The top element of the stack is " << s.top() 
		<< endl; 
	s.pop(); // popping from the stack 
	cout << "The top element after 1 pop operation is "
		<< s.top() 
		<< endl; // printing the top of the stack 
	s.pop(); // popping 
	cout << "The top element after 2 pop operations is "
		<< s.top() << endl; 
	cout << "Size of the stack after 2 pop operations is "
		<< s.size() << endl; 
	return 0; 
}

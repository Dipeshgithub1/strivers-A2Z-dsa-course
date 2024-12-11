//1. Compute XOR from 1 to n (direct method):

#include <bits/stdc++.h>
using namespace std;

int computeXOR(int n){
    
    if(n % 4 == 0){
        return n;
    }
    if(n % 4 == 1){
        return 1;
    }
    if(n % 4 == 2){
        return n +1;
    }
    else
       return 0;
}

int main() {
    int n;
    cin >> n;
    cout<< "compute XOR : " <<computeXOR(n);
    return 0;
}


//3. Convert binary code directly into an integer in C++
#include <bits/stdc++.h>
using namespace std;

int main() {
   auto number = 0b011;
   cout << number;
    return 0;
}

//4. The Quickest way to swap two numbers:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 5;
    int b = 7;
    
    cout<<"before Swapping, a = "<<a<<" "<<"b = "<< b<<endl;
    
    a ^= b;
    b ^= a;
    a ^= b;
    
    cout<<"After Swapping, a = "<<a<<" "<<"b = "<< b<<endl;
   
    return 0;
}

// 5.Finding the most significant set bit (MSB):

#include <bits/stdc++.h>
using namespace std;

int setBitNumber(int n){
    n |= n >> 1;
    
    n |= n >> 2;
    
    n |= n >> 4;
    
    n |= n >> 8;
    n |= n >> 16;
    
    n = n + 1;
     return (n >> 1);
}

int main() {
   int n;
   cin >> n;
   cout<<"set Bit Number is : " << setBitNumber(n);
    return 0;
}
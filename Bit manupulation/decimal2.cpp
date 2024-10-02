#include<iostream>

using namespace std;

int decimal2B(string n){
int num =0;
int p2 =1;

int length = n.length();

for(int i=length-1;i>=0;i--){

if(n[i]=='1'){
       num += p2;
}

p2= p2 * 2;
}
return num;
}


int main(){
    string binaryString;
    cout << "Enter a binary number: ";
    cin >> binaryString;
    
    int decimalValue = decimal2B(binaryString);
    cout << "The decimal value is: " << decimalValue << endl;
    
    return 0;
}
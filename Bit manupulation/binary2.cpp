#include <iostream>
#include <string>
#include <algorithm> // for reverse function

using namespace std;

string binary2Con(int n) {
    string result = "";
    while (n != 1) {
        if (n % 2 == 1) {
            result += "1";
        } else {
            result += "0";
        }
        n = n / 2;
    }
    result += "1"; // Add the last bit
    reverse(result.begin(), result.end()); // Reverse the string                 T.C = LOG2N       S.C = LOG2N
    return result;                                                               
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    cout << "Binary representation: " << binary2Con(num) << endl;
    return 0;
}

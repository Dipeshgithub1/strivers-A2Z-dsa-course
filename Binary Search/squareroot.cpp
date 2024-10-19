#include <iostream>
using namespace std;

int binarySearch(int n) {
    int s = 0;
    int end = n;
   long long int mid = s + (end - s) / 2;
    long long int ans = -1;
    
    while (s <= end) {
       long long int square = mid * mid;
        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = s + (end - s) / 2;
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter a number to find its square root: ";
    cin >> n;
    
    int result = binarySearch(n);
    cout << "The integer part of the square root of " << n << " is: " << result << endl;
    
    return 0;
}

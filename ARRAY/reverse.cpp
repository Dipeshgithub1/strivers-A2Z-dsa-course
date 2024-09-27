#include <iostream>
using namespace std;

int main() {
    int n = 5; // Initialize n to the size of the array
    int a[5] = {3, 2, 1, 5, 4};
    int min = a[0];

    for(int i = 0; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }

    cout << "Maximum value of array: " << min << endl;

    return 0; // Indicate successful completion
}

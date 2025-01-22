

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//Time Complexity: O(n), as we are traversing the array only once.
//Auxiliary space: O(1)
int getSecondLarge(vector<int> &arr) {
    int n = arr.size();

    int largest = -1, secondLargest = -1;

    
    for (int i = 0; i < n; i++) {

        
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
      
        
          else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main() {
    vector<int> arr = {12,35,1,10,34,1};
    cout<< getSecondLarge(arr);

    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();            // Number of elements in the input array
        int size = pow(2, n);           // Total subsets = 2^n

        vector<vector<int>> nums1;      // To store all subsets

        for (int i = 0; i < size; i++) { // Iterate through all binary representations
            vector<int> temp;           // Temporary vector for the current subset
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {     // Check if the j-th bit in i is set
                    temp.push_back(nums[j]);
                }
            }
            nums1.push_back(temp);      // Add the current subset to the result
        }
        return nums1;                   // Return the complete list of subsets
    }
};

int main() {
    Solution solution;

    // Example input
    vector<int> nums = {1, 2, 3};

    // Generate subsets
    vector<vector<int>> result = solution.subsets(nums);

    // Print the subsets
    cout << "Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}

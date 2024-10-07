class Solution {
  public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k) {
        // Your code here
        // It can be a one liner logic!! Think of it!!
    if ((n & (1 << k)) != 0) {
        return true;  // The k-th bit is set
    } else {
        return false; // The k-th bit is not set
    }   
}
};
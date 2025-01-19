// C++ program for find the largest 
// three elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to return three largest elements
vector<int> get3largest(vector<int> &arr)
{
    int fst = INT_MIN, sec = INT_MIN, thd = INT_MIN;

    for (int x : arr)
    {
        // If current element is greater than fst
        if (x > fst)
        {
            thd = sec;
            sec = fst;
            fst = x;
        }

        // If x is between fst and sec
        else if (x > sec && x != fst)
        {
            thd = sec;
            sec = x;
        }

        // If x is between sec and thd
        else if (x > thd && x != sec && x != fst)
            thd = x;
    }

    vector<int> res = {};
    if (fst == INT_MIN)
        return res;
    res.push_back(fst);
    if (sec == INT_MIN)
        return res;
    res.push_back(sec);
    if (thd == INT_MIN)
        return res;
    res.push_back(thd);
    return res;
}

// Driver code
int main()
{
    vector<int> arr = {12, 13, 1, 10, 34, 1};

    vector<int> res = get3largest(arr);
    for (int x : res)
        cout << x << " ";
    cout << endl;

    return 0;
}
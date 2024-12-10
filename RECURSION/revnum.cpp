#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
 
long long power(long long x, long long n)
{
    if (n == 0)
        return 1;
 
    if (x == 0)
        return 0;

    return (x * power(x, n - 1)) % mod;
}
 
int main()
{
    long long x = 57;
    long long n = 75;
 
    cout << (power(x, n));
}
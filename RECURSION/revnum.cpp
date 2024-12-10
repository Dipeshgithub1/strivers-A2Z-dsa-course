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

//2. Count of numbers (x) smaller than or equal to n such that n+x = n^x:

#include <bits/stdc++.h>
using namespace std;

int countValue(int n){
    int unset_bits = 0;
    while(n){
        if((n&1) == 0)
        unset_bits++;
        n=n>>1;
    }
    return 1 << unset_bits;
}

int main() {
    int n;
    cin >> n;
    cout<< "count Value  : " <<countValue(n);
    return 0;
}
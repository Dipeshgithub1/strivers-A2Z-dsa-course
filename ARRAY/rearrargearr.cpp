//Rearrange an array in maximum minimum form using Two Pointer Technique
#include <bits/stdc++.h>
using namespace std;


//Time Complexity: O(N), Iterating over the array of size N 2 times.
//Auxiliary Space: O(N), since N extra space has been taken.
void rearrange(long long* arr,int n){
    long long temp[n];
    
    int small =0, large = n-1;
    
    int flag = true;
    
    for(int i=0;i<n;i++){
        if(flag){
            temp[i] = arr[large--];
        }
        else
            temp[i] = arr[small++];
        flag = !flag;
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}

int main() {
    
long long arr[] = { 1, 2, 3, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    rearrange(arr, n);

    cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
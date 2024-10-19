#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        
        for(int j = i+1;j < n;j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main() {
 int sll[5] ={64,25,12,22,11};
 int n = sizeof(sll) / sizeof(sll[0]);
 
 selectionSort(sll,5);
 
selectionSort(sll, n);
    
    // Display the sorted array
    for(int i = 0; i < n; i++) {
        cout << sll[i] << " ";
    }
    
    return 0;
}
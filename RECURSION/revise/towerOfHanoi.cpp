//shift N-1 Disk from A to B using C    A - from_rod, B = to_rod and C = aux_rod
// shift last disk A TO C
//shift N-1 disk from B to C using A  

#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char from_rod,char to_rod,char aux_rod){    //A,B USING C
    //base case 
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,from_rod,aux_rod,to_rod);  // n-1 A,C,B
    cout<<" Move disk " << n <<" from rod " << from_rod <<" to rod " << to_rod<<endl;

    towerOfHanoi(n-1,aux_rod,to_rod,from_rod);  //N-1 ,C,B,A
}

int main(){
    int N =5;
    towerOfHanoi(N,'A','C','B');

}

//Time complexity: O(2N), There are two possibilities for every disk. Therefore, 2 * 2 * 2 * . . . * 2(N times) is 2N
//Auxiliary Space: O(N), Function call stack space
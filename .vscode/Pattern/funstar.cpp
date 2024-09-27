#include<iostream>
using namespace std;

void starPt(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    starPt(n);

    cout<<"star pattern is "<<endl;

}
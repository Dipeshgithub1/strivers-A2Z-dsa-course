#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main(){

    vector<int> arr(5);
    cout <<"enter a number" << endl;

    for(int i=0;i<5;i++){
        cin >> arr[i];

        //file
        ofstream fout;
        fout.open("zero.txt");

      for(int i=0;i<5;i++){
        fout << arr[i] << " ";
        }
        fout.close();

    }
}
#include<iostream>
using namespace std;

int main(){
    //simple pair
    pair<int,int>p ={1,3};

    cout<<p.first << " " <<p.second<<endl;


    //nested pair
    pair<int,pair<int,int>>pa={1,{3,4}};

    cout<<pa.first << " "  << " "<<pa.second.first<<" "<<pa.second.second<<endl;;

    //array pair

    pair<int,int>arr[]={{1,2},{3,4},{6,7}};
   
    cout<<arr[0].first <<" "<<arr[0].second<<endl;

    cout<<arr[1].first<<" "<<arr[1].second<<endl;

    cout<<arr[2].first<<" "<<arr[2].second<<endl;


}
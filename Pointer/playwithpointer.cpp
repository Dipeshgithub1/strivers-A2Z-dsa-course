#include <iostream>
using namespace std;

int main() {
    int arr[10] ={22,122,46,67};
    cout <<"address of first block is " <<arr << endl;
    cout << arr[0] <<endl;
    cout <<"address of first block is " <<&arr[0] << endl;
    
    cout <<"4th " <<*arr << endl;
     cout <<"5th " <<*arr + 1 << endl;
      cout <<"6th " <<*(arr + 1) << endl;
       cout <<"7th " <<*(arr) + 1 << endl;
        cout <<"8th " <<arr[2] << endl;
        
        int i =3;
        
         cout<<i[arr] << endl;

         int temp[10] = {1,2,3};
         cout<< "size of temp : " << sizeof(temp) << endl;
         cout <<"size of *temp : "<<sizeof(*temp) << endl;
         cout <<"size of &temp : "<<sizeof(&temp) << endl;
         
         
         int *ptr = &temp[0];
         
          cout <<"size of ptr : " << sizeof(ptr) << endl;
           cout<<"size of *ptr : " << sizeof(*ptr) << endl;
          cout <<"size of &ptr : "<< sizeof(&ptr) << endl;

           int a[20]={1,2,3,5};
         cout << &a[0] <<endl;
         cout << &a <<endl;
         cout << a <<endl;
         
         int *p = &a[0];
         cout << p<<endl;
         cout << &p <<endl;
         cout << *p <<endl;

         //symbol
          int arr[10];
          
          //error 
          //arr = arr+1;
          
          int *ptr = &arr[0];
          
          cout << ptr << endl;
          
          ptr = ptr + 1;
          cout << ptr << endl;

      //char Arrays
           
          int arr[5] ={1,2,3,4,5};
          char ch[6] = "abcde";
          
          cout << arr << endl;
          
          cout << ch << endl;
          
          char *c = &ch[0];
          //print entire string
          cout << c << endl;
          
          char temp = 'z';
          char *p = &temp;
          
          cout << p << endl;
          


    return 0;
}
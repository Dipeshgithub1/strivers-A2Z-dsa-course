#include<iostream>
using namespace std;

void PrintP2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
       cout<< "* ";
        }
        cout<<endl;
    }
}
void PrintP3(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
       cout<< j <<" ";
        }
        cout<<endl;
    }
}
void PrintP4(int n){
    for(int i = 1;i <= n;i++){
        for(int j = 1;j<=i;j++){
            cout<<i <<" ";
        }
        cout << endl;
    }
}
void PrintP5(int n){
    for(int i = 1;i < n;i++){
        for(int j = i; j < n;j++){
          cout<< "* ";  
        }
        cout << endl;
    }
}

void PrintP6(int n){
    for(int i =1;i <=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void PrintP7(int n){
    for(int i = 0;i < n;i++){
        //for space
        for(int j = 0;j<n-i-1;j++){
        cout<<" ";
        }
        //for star
        for(int j =0;j < 2*i+1;j++){
         cout << "*";
        }
        //for star
        for(int j = 0;j < n-i-1;j++){
         cout << " ";
        }
        cout<<endl;
    }
}

void PrintP8(int n){
    for(int i =0;i<n;i++){
        //space
        for(int j = 0 ;j < i;j++){
            cout<<" ";

        }
       //star
       for(int j =0;j<2*n-(2*i+1);j++){
        cout<<"*";
       }
       //space
       for(int j =0;j<i;j++){
        cout<<" ";
       }
       cout<<endl;
    }
}

void PrintP10(int n){
    for(int i =1;i<=2*n -1;i++){
        int star = i;
        if( i > n) star = 2*n-i;      

        for(int j =1;j<=star;j++){
            cout<<"*";
        }
     cout<<endl;
    }
}
void PrintP11(int n){
    int start =1;
    for(int i =0;i<=n;i++){
     if(n % 2 == 0){
        start = 1;
     }
     else{
        start = 0;
     }
     for(int j =0;j < i;j++){
        cout << start;
        start = 1 - start;
     }
     cout << endl;
    }
}
void PrintP12(int n){
    int space = 2* (n-1);
    for(int i = 1;i <= n;i++){
     //Number
     for(int j =1;j <=i;j++){
      cout << j;
     }
     //Space
     for(int j =i;j < space;j++){
        cout<<" ";
     }
     //Number
     for(int j =i;j>=1;j--){
     cout << j;
     }
     cout<<endl;
     space -= 2;
    }
}
void PrintP13(int n){
    int num =1;
    for(int i = 1;i<n;i++){
     for(int j =1;j<=i;j++){
        cout<<num << " ";
         num = num + 1;
     }
     cout<<endl;
    }
}

void PrintP14(int n){
    for(int i=0;i<n;i++){
     for(char ch ='A';ch <='A'+ i;ch++){
        cout << ch <<" ";
     }
     cout<<endl;
    }
}

void PrintP15(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A' + (n-i-1);ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void PrintP16(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j =0;j<=i;j++){
            cout<<ch <<" "; 
        }
        cout<<endl;
    }
}

void PrintP17(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        //alphabet
        char ch ='A';
        for(int j=0;j<2*i+1;j++){
            cout<<ch<<" ";
            ch++;
        }
        //space
        for(int j =0;j<n-i-1;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


void PrintP18(int n) {
    for(int i = 0; i < n; i++) {
        
        for(char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void PrintP19(int n){
    int ints=0;
    for(int i=0;i<n;i++){
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<ints;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        ints +=2;
        cout<<endl;

    }
    ints = 2*n -2;
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<ints;j++){
            cout<<" ";
        }
        //star
        for(int j =1;j<=i;j++){
        cout<<"*";
        }
        ints -=2;
        cout<<endl;
    }
    }


void PrintP20(int n){
    int spacess = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int starss =  i;
        if(i > n) starss = 2*n-i;
        //star
        for(int j=1;j<=starss;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=spacess;j++){
            cout<<"";
        }
        //star
        for(int j=1;j<=starss;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i < n) spacess -=2;
        else spacess +=2;
    }
}

void PrintP21(int n){
    for(int i=0; i<n; i++){
    for(int j=0; j<=n; j++){

        if(i ==0 || j==0 || i == n - 1 || j == n - 1){
            cout << "* ";
        }
        else cout<< " ";
}
cout<< endl;
    }
    
}

void PrintP22(int n){
    
}
int main(){
int n;
cin >> n;
PrintP21(n);
cout<<"star patter is "<<endl;

}
#include <iostream>
using namespace std;

class Hero {
 private:  
    //properties
    int health;
    public:
    char level;
    
    Hero(){
        cout<<"constructor is called"<<endl;
    }
    void print(){
        cout << level << endl;
    }
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
       health = h; 
    }
    void setLevel(char ch){
        level = ch;
    }
};


int main() {
//creation of object 
cout<<"hi"<<endl;
Hero ramesh;
cout <<"hello"<<endl;
//dynamiccaly 
Hero *h = new Hero();

/*cout <<"Ramesh health is "<<ramesh.getHealth()<<endl;
// Ramesh.health = 70;
 Ramesh.level = 'A';
cout << "health is "<<ramesh.getHealth() << endl;
cout << "level  is "<<Ramesh.level << endl;
*/
return 0;
}
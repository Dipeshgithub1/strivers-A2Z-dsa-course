#include <iostream>
using namespace std;

class Hero {
 private:  
    //properties
    int health;
    public:
    char level;
    
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
Hero Ramesh;
cout <<"Ramesh health is "<<Ramesh.getHealth()<<endl;
Ramesh.setHealth(70);
 Ramesh.level = 'A';
cout << "health is "<<Ramesh.getHealth() << endl;
cout << "level  is "<<Ramesh.getlevel() << endl;

return 0;
}
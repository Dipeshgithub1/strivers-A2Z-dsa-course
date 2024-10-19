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
    
    //paramerterised constructor
    Hero(int health){
      this -> health = health;
    }
    
     Hero(int health,char level){
    this -> level = level;
       this -> health = health;
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
Hero ramesh(10);
//cout <<"Address of ramesh : "<< &ramesh << endl;
ramesh.print();
//dynamiccaly 
Hero *h = new Hero();
h->print();
Hero temp(22,'B');
temp.print();
return 0;
}
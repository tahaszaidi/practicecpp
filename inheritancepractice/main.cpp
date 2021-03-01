#include <iostream>
using namespace std;

class Enemy{
    public:
            virtual void attack(){
                cout << "DANGER!" << endl;
            }
            void walk(){
                cout << "watch me walk!" << endl;
            }
};

class Ninja:public Enemy{
    public:
        void attack(){
            cout << "I am ninja!" << endl;
        }
};

class Monster:public Enemy{
    public:
        void attack(){
            cout << "I am monster!" << endl;
        }
};

int main() {

    Ninja ninja;
    ninja.attack();
    ninja.walk();
    Monster monster;
    monster.attack();
    monster.walk();
    Enemy *e1 = &ninja;
    Enemy *e2 = &monster;
    e1->attack();
    e1->walk();
    e2->attack();
    e2->walk();
}
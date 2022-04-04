#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;
    char level;

public:
    // getter and setter
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // creation of object
    // static object creation
    hero h1;

    h1.setHealth(70);
    cout << h1.getHealth() << endl;

    // dynammic object creation

    hero *h2 = new hero;
    (*h2).setHealth(50);
    cout << (*h2).getHealth() << endl; // (*h2) is use to derefencing the pointer

    cout << h2->getHealth(); // -> operator also use to derefence
}
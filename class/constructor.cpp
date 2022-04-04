#include <bits/stdc++.h>
using namespace std;

class hero
{
private:
    int health;

public:
    char *name;
    char level;

    // default constructor
    hero()
    {
        cout << "Default constructor called" << endl;
        name = new char[100];
    }

    // parameterized constructor
    hero(int health)
    {
        this->health = health;
    }

    hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }

    // copy constructor

    hero(hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << this->health << " " << this->level << " " << this->name << endl;
    }

    // getter and setter
    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
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
    hero h1;
    h1.setHealth(12);
    h1.setLevel('B');
    char name[7] = "bhavya";
    h1.setName(name);

    h1.print();

    hero h2(h1);
    h2.print();

    h1.name[0] = 'g';
    h1.print();

    h2.print();
    // hero r(70, 'C');
    // r.print();

    // copy constructor
    // hero s(r);
    // s.print();

    // creation of object

    // static object creation
    // hero h1(70);
    // hero h3(50, 'A');

    /// h1.setHealth(70);
    // cout << h1.getHealth() << endl;
    // cout << h3.getHealth() << " ";
    // cout << h3.getLevel() << endl
    //   << endl;

    // dynammic object creation
    // cout << "Dynamic object" << endl;
    // hero *h2 = new hero(100, 'B');
    // cout << h2->getHealth() << " " << h2->getLevel();
}
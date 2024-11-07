#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class Money
{
public:
    void getMoney();
};
void Money::getMoney()
{
    puts("5k USD");
}

class Man
{
    string _name;
    int _age;
    Man() {}

protected:
public:
    Man(const string &name, const int &age) : _name(name), _age(age) {}
    void run()
    {
        puts("i can run");
    }
    void sayName();
};
void Man::sayName()
{
    cout << _name << endl;
}

// superman

class Superman : public Man , public Money //multiple inheritance
{
    bool flight;

public:
    Superman(string name) : Man(name, 266)
    {
    }
    void run()
    {
        puts("i can run at light speed");
    }
};

// spiderman
class Spiderman : public Man
{
    bool climb;

public:
    Spiderman(string name) : Man(name, 26)
    {
    }
    void run()
    {
        puts("i can run using webs");
    }
};

int main()
{
    Man tanuj("tanuj", 19);
    tanuj.sayName();
    tanuj.run();
    Superman shashank("shashank");
    Spiderman tanush("tanush");
    shashank.sayName();
    shashank.run();
    shashank.sayName();
    shashank.getMoney();
    tanush.run();
}
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class One
{
public:
    virtual void intro()
    {
        cout << "i am one" << endl;
    }
};

class Two : public One{
    public :
        void intro(){
            cout << "i am two" << endl;
}
};

class Three : public One{
    public:
    void intro(){
        cout << "i am three" << endl ;
}
};

class Four : public One{
    public:
    void intro(){
        cout << "i am three" << endl ;
}
};



int main()
{
    // One a;
    // Two b;
    // Three c;
    // a.intro();
    // b.intro();
    // c.intro();
    //normal polymorphism

    One *a;
    Two b;
    Three c;
    a=&b;
    a->intro(); //runs intro() of a when intro is not with virtual keyword
    a=&c;
    a->intro(); //runs intro() of c when intro is not with virtual keyword


}








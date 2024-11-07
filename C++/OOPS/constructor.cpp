#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class User
{
private:
    string _name;
    int _age;
    //now if we define the default constr in privare no one can access it and can instantiate an obl using default method they have to use either the param or copy constr
    User();

public:
    User(string name,int age);
    User(User &value);
    ~User();
    string getName(){
        return _name;
    }
};

User::User():_name("default"),_age(){
    cout << "From Default Constr" << endl ;
    cout << getName() << endl ;
}

User::User(string name,int age):_name(name),_age(age){
    cout << "From Params Constr" << endl ;
    cout << getName() << endl ;
}

User::User(User &value){

    _name = "mera beta "+value._name;
    _age = value._age;
    cout << "From Copy Constr" << endl ;
    cout << getName() << endl ;
    


}

User::~User(){
    printf("i am at %s\n",_name.c_str());
}

int main(){
    // User tanuj;
    User tanush("tanush",19);
    User shashank=tanush;


}

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class User{
    public:
    string name="default";
    int age;
    int gender;
    int square(int x){
        return x*x;
    }   
};
class Scope{
    int x=100;
    public:
    void display(){
        cout << "inside public " << x << endl ;

    }




};

int main(){
    int x=0;
    cout << "main "<< x << endl ;

    
    while(x<10){
        int &y=x;
        cout << y<<" is inside while" << endl ;
        y=999;
        
    }
    cout << x << endl ;
    
    
    Scope scope;
    scope.display();



}
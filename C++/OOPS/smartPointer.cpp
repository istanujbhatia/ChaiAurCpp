#include <iostream>
#include <cstdio>
#include <string>
#include<memory>
using namespace std;
class User{
    public:
    User(){
        cout << "new user created" << endl ;
        
    }
    ~User(){
        cout << "the user destroyed" << endl ;
        
    }
    void testFunc(){
        cout << "i am a test function" << endl ;
        
    }
};
int main(){
    //scope
    {
        //one way to declare is to use new keyword but slight change in syntax
        // unique_ptr<User> sam(new User()); //use heap memory
        unique_ptr<User> sam=make_unique<User>();   //use stack memory
        sam->testFunc();
        // unique_ptr<User> samm=sam;  //this is not allowed as a unique ptr can not have a copy
        

    }
    cout << "outside the scope" << endl ;
    {
        // shared_ptr<User> tim(new User()); 
        //use heap memory this first creates a stcak memory and to keep the record make a memory allocation in heap this wastes the memory 

        shared_ptr<User> tim=make_shared<User>(); 

        //use stack memory , this also deletes the allocated memory after the object or scope ends
        shared_ptr<User> timm=tim;
    }

}   
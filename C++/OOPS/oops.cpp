#include <iostream>
#include <string>
using namespace std;
class User{
    int secret=0;
    public:
        string name = "default";
        void getMessage();
        void setSecret(const int &newSecret){
            secret=newSecret;

        }
        int getSecret()const{
            return secret;
        }


};
void User::getMessage(){
    cout << "Hello , "<< name << " we are inside the getMessage method"<< endl;

}//defination of a method outside the class but it is the part of the class;


// void root(int x){
//         cout << x << endl;
        
//     }
int main(){
    cout<<"this is main function"<<endl;
    User sam;
    User tanuj;
    cout << "Hello , "<< sam.name << endl;
    cout << "Hello , "<< tanuj.name << endl;
    tanuj.name="tanuj";
    sam.name="sam";
    cout << "Hello , "<< sam.name << endl;
    cout << "Hello , "<< tanuj.name << endl;
    sam.getMessage();
    tanuj.getMessage();
    int samSecret=990;//all these lines;s explanation is in copy; 
    int tanujSecret=69;
    sam.setSecret(samSecret);
    tanuj.setSecret(tanujSecret);
    cout << "sam's Secret is "<<sam.getSecret() << endl;
    cout << "tanuj's Secret is "<< tanuj.getSecret()<< endl;



    const User rock;
    cout << rock.getSecret() << endl ;
      //can access variables but not the non const methods to do so add const to methods

    
    // int x=10;
    // root(109);
}
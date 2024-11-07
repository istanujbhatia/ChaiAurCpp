#include <iostream>
using namespace std;
template<typename T>
void func(T a){
    cout << a << endl;

}

template<typename T,typename... Args>
void func(T t,Args... args){
    cout << t << endl;
    func(args...);
}

//here the func() works as an terminating condition for recursive func() with args... as when there is only 1 argument func() used , with more it uses recursaive func() , in recursive func() the 1st one is printed and all next gets into args... and the func() is called again where again the 1st arg is printed and rest passed again , at the end when there is only one arg left then the func with 1 argument is called. also tehre are templates used to accept any sort of datatype.
int main(){
    func(1,2,3,4,5,56,"tanujbhatia");
    return 0;
}
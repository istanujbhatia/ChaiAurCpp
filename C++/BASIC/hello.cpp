#include <iostream>
using namespace std;

int main() {
    int n=0;
    int *addressOfn;
    addressOfn=&n;
    printf("%d is value of n and %p is address of n \n ",*addressOfn,addressOfn);
    int q=77;
    // printf("%d",q);
    int &anotherQ=q;
    printf("value of q is %d and value of anotherQ is %d \n",q,anotherQ);
    anotherQ=56656;
    printf("AFTER CHANGE value of q is %d and value of anotherQ is %d \n",q,anotherQ);

}
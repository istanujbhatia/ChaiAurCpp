#include <iostream>

void printVal(int* ptr){
    printf("%p \n",ptr);

}

int main(){

    printVal(nullptr);
    return 0;
}
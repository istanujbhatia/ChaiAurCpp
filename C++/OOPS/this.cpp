#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
class Rectangle{
    double _length;
    double _breadth;
    public:
        Rectangle(double l,double b);
        double area(){
            return _length*_breadth;
        }
        bool compare(Rectangle rectangle){
            return this->area()>rectangle.area();

        }
};
Rectangle::Rectangle(double l,double b){
    _length=l;
    _breadth=b;

}

int main(){
    Rectangle shape1(2.0,2.0);
    Rectangle shape2(4.0,4.0);
    if(shape1.compare(shape2)){
        cout << "Shape 1 is bigger with Area = " << shape1.area()<< endl ;
        
    }else{
        cout << "Shape 2 is bigger with Area = "<<shape2.area() << endl ;
      
    }

}



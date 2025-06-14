// my first c++file
#include <iostream>
using namespace std;

class Shape{
public:
    virtual void area()=0;
};

class Rectangle : public Shape{
 int length , width;
 public:
    Rectangle (int l, int w): length(l), width(w){}
    void area()override{
    cout<<"area of rectangle: "<<length*width<<endl;
  }
};

class Circle: public Shape{
    int radius;
    public:
    Circle(int r): radius(r){}
        void area()override{
            cout<<"area of circle: "<<3.14*radius*radius<<endl;
        }
};
int main(){
    Shape* s1= new Rectangle(5,6);
    Shape* s2= new Circle(3);

    s1->area();
    s2->area();
    return 0;
}

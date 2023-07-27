//we will convert code of file 10 into classes and constructor
//basically we are going to convert C to C++ in most efficient way

#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(){                //Non-argument constructor / default constructor
            length=breadth=1;
        }
        Rectangle(int l,int b);      //constructor overloading / parameterized constructor

        int area();                     //facilitators
        int perimeter();                //facilitators

        int getLength(){                //accesser
            return length;
        }

        int setLength(int l){            //mutator
            length = l;
            return length;
        }
        ~Rectangle();                   //Destructor
};

Rectangle :: Rectangle(int l,int b){
    length = l;
    breadth = b;
}
int Rectangle :: area(){
    return length*breadth;
}
int Rectangle :: perimeter(){
    return 2*(length+breadth);
}
Rectangle :: ~Rectangle(){}

int main(){
    Rectangle r(15,5);
    cout<<"Area of rectangle : "<<r.area();
    cout<<"\nPerimeter of rectangle : "<<r.perimeter();
    cout<<"\nLength before : "<<r.getLength();
    r.setLength(30);
    cout<<"\nLength After : "<<r.getLength();
}
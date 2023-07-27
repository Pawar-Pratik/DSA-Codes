//Call by Reference
#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle &R){
    int a;
    a = R.length*R.breadth;
    return a;
}
int main(){
    struct Rectangle r={15,20};
    cout<<"area of rectangle : "<<area(r);
}

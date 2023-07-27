//Call by Address
#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle *p){
    return p->length*p->breadth;
}
int main(){
    struct Rectangle r={10,20};
    printf("Area of rectangle : %d",area(&r));
}
//Call by value
#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int area(struct Rectangle R){
    return R.length*R.breadth;
}
int main(){
    struct Rectangle r={15,20};
    printf("area of rectangle : %d",area(r));
}

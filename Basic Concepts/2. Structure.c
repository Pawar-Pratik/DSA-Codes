#include<stdio.h>
struct Rectangle //declaring structure
{
    int length;
    int breadth;
};
int main(){
    //struct Rectangle r;     declaring structure variable
    struct Rectangle r={5,15}; //declaring & initializing structure variable
    printf("(Before) \nLength of rectangle : %d\nBreadth of rectangle : %d",r.length,r.breadth);
    r.length = 15;
    r.breadth = 2;
    printf("\n(After) \nLength of rectangle : %d\nBreadth of rectangle : %d",r.length,r.breadth);

    printf("\nArea of rectangle is : %d",r.length*r.breadth);
}

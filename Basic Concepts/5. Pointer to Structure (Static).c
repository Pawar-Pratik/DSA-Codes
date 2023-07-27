#include<stdio.h>
struct Rectangle        //declaring structure;
{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r={15,2};
    struct Rectangle *p=&r;
    printf("Length of Rectangle : %d",r.length);
    r.length = 10;
    printf("\nLength of Rectangle : %d",r.length);  //using structure variable
    p->length = 20;
    printf("\nLength of Rectangle : %d",p->length); //using pointer
    (*p).length = 30;
    printf("\nLength of Rectangle : %d",(*p).length); //alternate method using pointer

}
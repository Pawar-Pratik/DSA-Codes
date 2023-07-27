#include<stdio.h>
#include<stdlib.h>      //required by malloc function

struct Rectangle        //declaring structure;
{
    int length;
    int breadth;
};
int main(){
    struct Rectangle *p;
    p=(struct Rectangle *)malloc(sizeof(struct Rectangle));     //alloting space dynamically
    p->length = 15;
    p->length = 20;
}
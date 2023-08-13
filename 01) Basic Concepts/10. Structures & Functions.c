#include<stdio.h>
struct Rectangle{
    int lenght;
    int breadth;
};
void initialize(struct Rectangle *r,int l,int b){
    r->lenght = l;
    r->breadth = b;
}
int area(struct Rectangle r){
    return r.lenght*r.breadth;
}
void changeLength(struct Rectangle *p,int l){
    p->lenght = l;
}

int main(){
    struct Rectangle r;
    initialize(&r,15,15);
    area(r);
    changeLength(&r,20);
}

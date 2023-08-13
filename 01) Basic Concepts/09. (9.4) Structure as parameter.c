//As we know array cannot be pass by method call by value
//but we can pass structure by "pass by value" method which contains "Array"
#include<stdio.h>
struct Arr
{
    int A[3];
    int n;
};
void fun(struct Arr r){
    r.A[0]=3;
    r.A[1]=3;
    printf("\n(function)Array : ");
    for (int i = 0; i < r.n; i++)
    {
        printf("%d ",r.A[i]);
    }
}
int main(){
    struct Arr a={{1,2,3},3};
    printf("(main)Array : ");

    for(int i=0 ; i<a.n ; i++){
        printf("%d ",a.A[i]);
    }
    fun(a);
}

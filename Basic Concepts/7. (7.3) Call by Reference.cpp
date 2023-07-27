//references is not available in C.
#include<iostream>
using namespace std;

void Swap(int &x,int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    a=10;
    b=20;
    cout<<"(Before)"<<a<<" "<<b;
    Swap(a,b);
    cout<<"\n(After)\t"<<a<<" "<<b;
}

//references work as nick name, which meance it does not have any storage, it makes changes to actual variables 
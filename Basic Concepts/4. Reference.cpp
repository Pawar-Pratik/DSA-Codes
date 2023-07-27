//Reference only available in C++

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &r = a;     //Declaring & initializing reference

    cout<<a;
    r++;
    cout<<"\n"<<r;
    cout<<"\n"<<a;
}
//referencing is nothing but another name to variable

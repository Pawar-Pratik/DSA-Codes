//C++ supporrts generic function and generic classes
//generic function, generic classes = Template function, Template classes
//generic means any data type.

#include<iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a,T b);
    T add();
    T sub();
    ~Arithmetic();
};

template <class T>
Arithmetic<T>::Arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}

template <class T>
T Arithmetic <T>:: add(){
    T c;
    c = a+b;
    return c;
}

template <class T>
T Arithmetic <T> :: sub(){
    T c;
    c = a-b;
    return c;
}

template <class T>
Arithmetic<T>::~Arithmetic()
{
}

int main(){
    Arithmetic <int> ar(10,5);
    cout<<"Addition is : "<<ar.add();
    cout<<"\nSubtraction is : "<<ar.sub();

    Arithmetic <float> fl(1.5,1.2);
    cout<<"\nAddition is : "<<fl.add();
    cout<<"\nSubtraction is : "<<fl.sub();
}

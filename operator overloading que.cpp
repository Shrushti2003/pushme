#include<iostream>
using namespace std;
class A{
    int a,b;
    
public:
A();
A(int p, int q);
void operator-();
void operator--();
};

A :: A(){
    a = 0;
    b = 0;
}
A :: A(int p, int q){
    a = p;
    b = q;
}

void A :: operator-(){
     a = -a;
     b = -b;
}
void A :: operator--(){
    --a;
    --b;
}

int main(){
  A x;
    x = A(5, -6);
    -x;
    --x;
    cout << "a: " << x.a << endl << "b: " << x.b << endl;

}
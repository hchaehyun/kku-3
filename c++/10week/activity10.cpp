
/*
//8-4
class Base{
    int a;
    protected:
    void setA(int a){this->a = a;}
    public:
    void showA(){cout << a;}
};

class Derived : private Base{
    int b;
    protected:
    void setB(int b){this->b = b;}
    public:
    void showB(){cout << b;}
};

int main(){
    Derived x;
    //x.a = 5;
    //x.setA(10);
    //x.showA();
    x.b = 10;
    x.setB(10);
    x.showB();
}



//8-5
class Base{
    int a;
    protected:
    void setA(int a){this->a = a;}
    public:
    void showA(){cout << a;}
};

class Derived : protected Base{
    int b;
    protected:
    void setB(int b){this->b = b;}
    public:
    void showB(){cout << b;}
};

int main(){
    Derived x;
    //x.a = 5;
    //x.setA(10);
    //x.showA();
    //x.b = 10;
    //x.setB(10);
    x.showB();
}



//8-6
class Base{
    int a;
    protected:
    void setA(int a){this->a = a;}
    public:
    void showA() {cout << a;}

};

class Derived : private Base{
    int b;
    protected:
    void setB(int b){this->b = b;}
    public:
    void showB(){
        setA(5);
        showA();
        cout << b;
    }
};

class GrandDerived : private Derived{
    int c;
    protected:
    void setAB(int x){
        //setA(x);
        //showA();
        setB(x);
    }
};



//9-1 ~9-4
//9-1
class Base{
    public:
    void f(){cout << "Base::f() called" << endl;}
};

class Derived : public Base{
    public:
    void f(){cout << "Derived::f() called" << endl;}
};

void main(){
    Derived d, *pDer;
    pDer = &d;
    pDer->f();

    Base* pBase;
    pBase = pDer;
    pBase->f();
}



//9-2
class Base{
    public:
    virtual void f(){cout << "Base::f() called" << endl;}
};

class Derived : public Base{
    public:
    void f(){cout << "Derived::f() called" << endl;}
};

int main(){
    Derived d, *pDer;
    pDer = &d;
    pDer->f();

    Base *pBase;
    pBase = pDer;
    pBase->f();
}



//9-3
class Base{
    public:
    virtual void f(){cout << "Base::f() called" << endl;}
};

class Derived : public Base{
    public:
    void f(){cout << "Derived::f() called" << endl;}
};

class GrandDerived : public Derived{
    public:
    void f(){cout << "GrandDerived::f() called" << endl;}
};

int main(){
    GrandDerived g;
    Base *bp;
    Derived *dp;
    GrandDerived *qp;

    bp = dp = qp = &g;

    bp->f();
    dp->f();
    qp->f();
}

*/

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
using namespace std;

int main(){
    Shape *pStart = NULL;
    Shape *pLast;

    pStart = new Circle();
    pLAst = pStart;

    pLast = pLast -> add(new Rect());
    pLast = pLast -> add(new Circle());
    pLast = pLast -> add(new Line());
    pLast = pLast -> add(new Rect());
}
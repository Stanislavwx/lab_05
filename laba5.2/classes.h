#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
using namespace std;

class A {
public:
    A();
    virtual ~A();
};

class B {
public:
    B();
    virtual ~B();
};

class C {
public:
    C();
    virtual ~C();
};

class D : public A, public B, public C {
public:
    D();
    ~D();
};

#endif

#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>
using namespace std;

// Базовий клас
class Vehicle {
public:
    Vehicle();
    virtual ~Vehicle();
    void info();
};

// Похідний клас 1
class Transport : virtual public Vehicle {
public:
    Transport();
    ~Transport();
    void move();
};

// Похідний клас 2
class Engine : virtual public Vehicle {
public:
    Engine();
    ~Engine();
    void start();
};

// Кінцевий похідний клас
class Car : public Transport, public Engine {
public:
    Car();
    ~Car();
    void drive();
};

#endif // TRANSPORT_H

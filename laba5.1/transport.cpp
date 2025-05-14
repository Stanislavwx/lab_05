#include "transport.h"

// Vehicle
Vehicle::Vehicle() {
    cout << "[Vehicle] constructor\n";
}

Vehicle::~Vehicle() {
    cout << "[Vehicle] destructor\n";
}

void Vehicle::info() {
    cout << "This is a vehicle.\n";
}

// Transport
Transport::Transport() {
    cout << "[Transport] constructor\n";
}

Transport::~Transport() {
    cout << "[Transport] destructor\n";
}

void Transport::move() {
    cout << "Transport is moving.\n";
}

// Engine
Engine::Engine() {
    cout << "[Engine] constructor\n";
}

Engine::~Engine() {
    cout << "[Engine] destructor\n";
}

void Engine::start() {
    cout << "Engine started.\n";
}

// Car
Car::Car() {
    cout << "[Car] constructor\n";
}

Car::~Car() {
    cout << "[Car] destructor\n";
}

void Car::drive() {
    cout << "Car is driving.\n";
}

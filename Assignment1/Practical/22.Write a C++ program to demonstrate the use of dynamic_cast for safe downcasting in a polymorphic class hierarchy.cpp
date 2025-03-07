#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
    virtual ~Base() {} // Virtual destructor for safe polymorphic behavior
};

// Derived class
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }

    void derivedFunction() {
        cout << "This is a function specific to the Derived class." << endl;
    }
};

int main() {
    // Creating an object of the Derived class
    Base* basePtr = new Derived();
    
    // Demonstrating dynamic_cast for safe downcasting
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);  // Safe downcast from Base* to Derived*

    if (derivedPtr) {
        // If the downcast is successful, we can call the derived class methods
        derivedPtr->show();
        derivedPtr->derivedFunction();
    } else {
        // If the downcast fails, dynamic_cast returns nullptr
        cout << "Downcasting failed!" << endl;
    }

    delete basePtr;  // Cleaning up
    return 0;
}


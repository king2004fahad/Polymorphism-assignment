#include <iostream>
#include <string>
using namespace std;

/*
PART 1: CHAINED (MULTILEVEL) INHERITANCE
Image 1: [View image 1](IMAGE1.jpeg)
*/

// Base class
class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) {
        brand = b;
    }

    void showBrand() {
        cout << "Brand: " << brand << endl;
    }
};

// Intermediate derived class inheriting from Vehicle
class Car : public Vehicle {
protected:
    int numDoors;

public:
    Car(string b, int doors) : Vehicle(b) {
        numDoors = doors;
    }

    void showCarInfo() {
        showBrand(); // Inherited from Vehicle
        cout << "Number of doors: " << numDoors << endl;
    }
};

// Lowest derived class in the chain inheriting from Car
class ElectricCar : public Car {
private:
    int batteryCapacity; // in kWh

public:
    ElectricCar(string b, int doors, int battery) : Car(b, doors) {
        batteryCapacity = battery;
    }

    void showDetails() {
        showCarInfo(); // Inherited through Car from Vehicle
        cout << "Battery capacity: " << batteryCapacity << " kWh" << endl;
    }
};


/*
PART 2: POLYMORPHISM
Image 2: [View image 2](IMAGE2.jpeg)
*/

// Base class
class Animal {
public:
    // Virtual function enables runtime polymorphism
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }

    virtual ~Animal() {}
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog says: Woof! Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Cat says: Meow!" << endl;
    }
};


// Main function running both demonstrations
int main() {

    cout << "1. DEMONSTRATING CHAINED INHERITANCE" << endl;

    // Creating object of the bottom class in the chain
    ElectricCar myTesla("Tesla", 4, 75);
    myTesla.showDetails();

    cout << "\n2. DEMONSTRATING RUNTIME POLYMORPHISM" << endl;

    // Objects of derived classes
    Dog myDog;
    Cat myCat;

    // Base class pointers point to derived class objects
    Animal* animalPtr1 = &myDog;
    Animal* animalPtr2 = &myCat;

    // The same function call executes different logic based on object type
    cout << "Calling via Animal pointer 1: ";
    animalPtr1->makeSound();

    cout << "Calling via Animal pointer 2: ";
    animalPtr2->makeSound();

    return 0;
}
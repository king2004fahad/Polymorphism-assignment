# Polymorphism Assignment

This C++ assignment demonstrates two object-oriented programming concepts:

- **Multilevel inheritance:** `ElectricCar` inherits from `Car`, which inherits from `Vehicle`.
- **Runtime polymorphism:** `Dog` and `Cat` override the virtual `makeSound()` method from `Animal`.

The program shows how inheritance supports code reuse and how a base-class pointer can invoke behavior specific to a derived object.

## Files

- [main_c_assignment.cpp](main_c_assignment.cpp) — C++ source code
- [Polymorphism_Assignment.md](Polymorphism_Assignment.md) — assignment report and explanation
- [IMAGE1.jpeg](IMAGE1.jpeg), [IMAGE2.jpeg](IMAGE2.jpeg) — supporting illustrations

## Build and run

With a C++ compiler such as g++:

```sh
g++ main_c_assignment.cpp -o polymorphism_assignment
./polymorphism_assignment
```

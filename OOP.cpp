// - Problem solving
//  - Procedural Programming
//  - Object Oriented Programming
//  - Functional Programming

// Object Oriented Programming - It's a programming paradigm - ways of solving problems.

// Object Oriented Programming
//  - Objects
//  - Classes
//  - Inheritance
//  - Polymorphism
//  - Encapsulation

// Classes
//  - A class is a blueprint for creating objects.
//  - A class is a user defined data type.
//  - A class has data members and member functions.
//  - A class is a template for objects, and an object is an instance of a class.

// Objects
//  - An object is an instance of a class.
//  - An object is a concrete entity based on a class, and is sometimes referred to as an instance of a class.
//  - An object is an instance of a class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

// Inheritance
//  - Inheritance is a process by which one class takes on the attributes and methods of another.
//  - Newly formed classes are called child classes, and the classes that child classes are derived from are called parent classes.
//  - Child classes can override or extend the attributes and methods of parent classes.
//  - Inheritance provides reusability of code and saves time.

// Polymorphism
//  - Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

// Encapsulation
//  - Encapsulation is the packing of data and functions into a single component.
//  - Encapsulation means that the internal representation of an object is generally hidden from view outside of the object's definition.
//  - Encapsulation means that each object is responsible for its own state and defines its own behavior.

// Abstraction
//  - Abstraction means displaying only essential information and hiding the details.
//  - Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

// Access Modifiers
//  - Access modifiers are keywords in object-oriented languages that set the accessibility of classes, methods, and other members.
//  - Access modifiers are a specific part of programming language syntax used to facilitate the encapsulation of components.

// Access Modifiers in C++
//  - public - members are accessible from outside the class
//  - private - members cannot be accessed (or viewed) from outside the class
//  - protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

#include <iostream>
using namespace std;
using std::string;

class Employee {
public:
        string Name;
        string Company;
        int Age;

        void Introduction(){
            std::cout << "Name: " << Name << std::endl;
            std::cout << "Company: " << Company << std::endl;
            std::cout << "Age: " << Age << std::endl;
        }
};
// int main(){
//     Employee employee1;
    
//     employee1.Name = "Adde";
//     employee1.Company = "Youtube";
//     employee1.Age = 23;
//     employee1.Introduction();
//     employee1.Introduction();
//     employee1.Introduction();
//     employee1.Introduction();
// }

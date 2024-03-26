class sample {

int m;

void read (void); // private member function

public:

void update (void);

void write (void);

};

If s1 is an object of sample, then

s1.read();

// won't work; objects cannot access

// private members

is illegal. However, the function read() can be called by the function update() to update the value of m.

void sample update (void)

read(); // simple call; no object used

#include <iostream>
#include <string>

class MyClass {
private:
    int id;
    std::string name;

public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called" << std::endl;
        id = 0;
        name = "Default";
    }

    // Parameterized constructor
    MyClass(int id, const std::string& name) {
        std::cout << "Parameterized constructor called" << std::endl;
        this->id = id;
        this->name = name;
    }

    // Function to display object details
    void display() {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }
};

int main() {
    // Creating objects using default constructor
    MyClass obj1;
    std::cout << "Object 1 details: ";
    obj1.display();

    // Creating objects using parameterized constructor
    MyClass obj2(101, "John");
    std::cout << "Object 2 details: ";
    obj2.display();

    return 0;
}
#include <iostream>

class MyClass {
public:
    static void staticFunc() {
        std::cout << "Inside staticFunc" << std::endl;
    }
};

int main() {
    MyClass::staticFunc(); // Calling static member function using class name
    return 0;
}

#include <iostream>

class MyClass {
public:
    static int staticVar; // Declaration of static data member

    // Constructor to initialize staticVar
    MyClass() {
        staticVar = 0;
    }
};

// Definition of static data member
int MyClass::staticVar;

int main() {
    MyClass obj1, obj2;

    // Accessing staticVar using object
    std::cout << "Value of staticVar for obj1: " << obj1.staticVar << std::endl; // Output: 0
    std::cout << "Value of staticVar for obj2: " << obj2.staticVar << std::endl; // Output: 0

    // Modifying staticVar using one object
    obj1.staticVar = 5;

    // Accessing staticVar using another object
    std::cout << "Value of staticVar for obj1: " << obj1.staticVar << std::endl; // Output: 5
    std::cout << "Value of staticVar for obj2: " << obj2.staticVar << std::endl; // Output: 5

    return 0;
}

#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    // Creating object dynamically using new
    MyClass* ptr = new MyClass();

    // Deleting the dynamically allocated object
    delete ptr; // Destructor is called before freeing memory

    return 0;
}

#include <iostream>

class Base {
protected:
    int protectedVar;

public:
    void setProtectedVar(int value) {
        protectedVar = value;
    }

    void displayProtectedVar() {
        std::cout << "Protected Variable: " << protectedVar << std::endl;
    }
};

class Derived : public Base {
public:
    void accessProtectedVar() {
        protectedVar = 20; // Accessible in derived class
    }
};

int main() {
    Derived obj;
    // obj.protectedVar = 20; // Error: protectedVar is inaccessible
    obj.setProtectedVar(20);
    obj.displayProtectedVar(); // Output: Protected Variable: 20

    return 0;
}

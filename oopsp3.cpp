#include <iostream>
//ques 10
class MyClass {
public:
    static void staticFunction() {
        std::cout << "This is a static member function." << std::endl;
    }
};

int main() {
    // Accessing static member function using class name
    MyClass::staticFunction();

    // Accessing static member function using object
    MyClass obj;
    obj.staticFunction(); // This is valid but not recommended

    return 0;
}
//ques 11
#include <iostream>
#include <string>

void reverseString(std::string& str, int start, int end) {
    if (start >= end)
        return;

    // Swap characters at start and end positions
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursively call reverseString with updated start and end positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    reverseString(str, 0, str.length() - 1);

    std::cout << "Reversed string: " << str << std::endl;

    return 0;
}

//ques 11

#include <iostream>
using namespace std;

class MyClass {
private:
    int num;

public:
    // Default constructor
    MyClass() {
        num = 0; // Set default value
    }

    // Parameterized constructor
    MyClass(int n) {
        num = n; // Set value based on parameter
    }

    // Function to display the value of num
    void display() {
        cout << "Value of num: " << num << endl;
    }
};

int main() {
    // Creating objects using default and parameterized constructors
    MyClass obj1; // Default constructor called
    MyClass obj2(10); // Parameterized constructor called

    // Displaying values
    cout << "Object 1:" << endl;
    obj1.display();

    cout << "Object 2:" << endl;
    obj2.display();

    return 0;
}

//ques 12
#include <iostream>
using namespace std;

// Define a structure
struct Person {
    string name;
    int age;
};

int main() {
    // Declare a pointer to a Person structure
    Person* ptr;

    // Allocate memory for a Person structure
    ptr = new Person;

    // Access structure members using the arrow operator (->)
    ptr->name = "John";
    ptr->age = 30;

    // Display structure members
    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;

    // Deallocate memory
    delete ptr;

    return 0;
}

//ques 16
#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;//static data member
    public:
    void setdata(void)
    {
        cout<<"Enter id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"The id of this employee is "<<id<<" and this employee number is:"<<count<<endl;
    }
    static void getcount(void)//static member function
    {
        cout<<"The value of count is:"<<count<<endl;//returns a static member
    }

};
int employee :: count;// a static keyword
int main()
{
    employee samidha,mehak,himani;
    samidha.setdata();
    samidha.getdata();
    employee::getcount();//static member function

    mehak.setdata();
    mehak.getdata();
    employee::getcount();

    himani.setdata();
    himani.getdata();
    employee::getcount(); 
    
    return 0;
}

//17
#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Dynamically allocate an object of MyClass
    MyClass* obj = new MyClass();

    // Explicitly call the destructor
    delete obj;

    return 0;
}

//19
member function,  static functions,friend function, virtual function, overriding function, function overloading

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    int area() {
        return length * width;
    }

    // Member function to calculate perimeter
    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5, 3);
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;
    return 0;
}

//Static functions are associated with the class rather than with any particular object of the class. T
//they can be called without an object
#include <iostream>
using namespace std;

class Math {
public:
    // Static function to add two numbers
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    cout << "Sum: " << Math::add(5, 3) << endl;
    return 0;
}
//not member functions of the class but are declared within the class.
//have access to the private and protected members
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Declare friend function
    friend void displayArea(Rectangle rect);
};

// Define friend function
void displayArea(Rectangle rect) {
    cout << "Area: " << rect.length * rect.width << endl;
}

int main() {
    Rectangle rect(5, 3);
    displayArea(rect);
    return 0;
}

// Virtual functions are functions declared within a base class and overridden by derived classes. 
// They enable runtime polymorphism, allowing a pointer of a base class type to invoke the appropriate derived class function

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

int main() {
    Shape* shapePtr = new Circle();
    shapePtr->draw();  // Output: "Drawing a circle"
    delete shapePtr;
    return 0;
}
// Overriding functions occur when a derived class provides a specific implementation 
//of a function  that is already defined in its base class. 
// It allows derived classes to customize the behavior of inherited functions.

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog;
    dog.speak();  // Output: "Dog barks"
    return 0;
}

// Function overloading occurs when multiple functions in the same scope have the same name but different parameters. 
// The compiler determines which function to call based on the number and types of arguments.


#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math math;
    cout << math.add(5, 3) << endl;      // Output: 8
    cout << math.add(5.5, 3.2) << endl;  // Output: 8.7
    return 0;
}

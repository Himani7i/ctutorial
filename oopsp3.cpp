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




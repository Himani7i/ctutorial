// C++ program to demonstrate 
// array of strings using
// pointers character array
#include <iostream>

// Driver code
int main()
{
// Initialize array of pointer
const char* colour[4]
	= { "Blue", "Red", "Orange", "Yellow" };

// Printing Strings stored in 2D array
for (int i = 0; i < 4; i++)
	std::cout << colour[i] << "\n";

return 0;
}


//POINTERS TO STRINGS
#include <iostream>

int main() {
    // Define a string as an array of characters
    char str1[] = "Hello, World!";

    // Declare a pointer to a character
    char *ptr1 = str1;

    // Access and print characters using the pointer
    while (*ptr1 != '\0') {
        std::cout << *ptr1;
        ptr1++;
    }

    return 0;
}

#include <iostream>
#include <string>

int main() {
    // C++ string literal
    const char* str3 = "Hello, World!";

    // Declare a pointer to a character
    const char* ptr3 = str3;

    // Access and print characters using the pointer
    while (*ptr3 != '\0') {
        std::cout << *ptr3;
        ptr3++;
    }

    // Using std::string
    std::string str4 = "Hello, World!";

    // Declare a pointer to a character
    const char* ptr4 = str4.c_str();

    // Access and print characters using the pointer
    while (*ptr4 != '\0') {
        std::cout << *ptr4;
        ptr4++;
    }

    return 0;
}

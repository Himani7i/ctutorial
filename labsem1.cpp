//sincostan
#include <iostream>
#include <cmath>

int main() {
    // Input angle in degrees
    double angleDegrees;
    std::cout << "Enter the angle in degrees: ";
    std::cin >> angleDegrees;

    // Convert angle to radians (math functions use radians)
    double angleRadians = angleDegrees * M_PI / 180.0;

    // Calculate and print sinθ, cosθ, and tanθ
    double sinValue = sin(angleRadians);
    double cosValue = cos(angleRadians);
    double tanValue = tan(angleRadians);

    std::cout << "sin(theta) = " << sinValue << std::endl;
    std::cout << "cos(theta) = " << cosValue << std::endl;

    // Check if tan(theta) is undefined (divide by zero)
    if (cosValue != 0.0) {
        std::cout << "tan(theta) = " << tanValue << std::endl;
    } else {
        std::cout << "tan(theta) is undefined (division by zero)" << std::endl;
    }

    return 0;
}

//pythagoras
#include <iostream>
#include <cmath>

int main() {
    double sideA, sideB, hypotenuse;

    // Input the lengths of the two sides
    std::cout << "Enter the length of side A: ";
    std::cin >> sideA;

    std::cout << "Enter the length of side B: ";
    std::cin >> sideB;

    // Calculate the length of the hypotenuse using the Pythagorean Theorem
    hypotenuse = sqrt(pow(sideA, 2) + pow(sideB, 2));

    // Output the result
    std::cout << "The length of the hypotenuse is: " << hypotenuse << std::endl;

    return 0;
}

//vowel consonant
#include <iostream>

int main() {
    char userChar;

    // Input a character from the user
    std::cout << "Enter a character: ";
    std::cin >> userChar;

    // Convert the character to lowercase for case-insensitivity
    userChar = tolower(userChar);

    // Check if the entered character is a vowel or a consonant using switch-case
    switch (userChar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << "The entered character is a vowel." << std::endl;
            break;
        default:
            std::cout << "The entered character is a consonant." << std::endl;
            break;
    }

    return 0;
}

//1 to 100 numbers whose digits sum is even
#include <iostream>

int main() {
    int number = 1;

    do {
        // Calculate the sum of digits for the current number
        int tempNumber = number;
        int digitSum = 0;

        while (tempNumber > 0) {
            digitSum += tempNumber % 10;
            tempNumber /= 10;
        }

        // Check if the sum of digits is even
        if (digitSum % 2 == 0) {
            std::cout << number << " ";
        }

        // Move to the next number
        number++;

    } while (number <= 100);

    std::cout << std::endl;

    return 0;
}

//fact recursion
#include <iostream>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int userNumber;

    // Input a number from the user
    std::cout << "Enter a number: ";
    std::cin >> userNumber;

    // Check for non-negative input
    if (userNumber < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Call the factorial function and print the result
        int result = factorial(userNumber);
        std::cout << "The factorial of " << userNumber << " is: " << result << std::endl;
    }

    return 0;
}


//fibonacci using recursion
#include <iostream>

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: F(n) = F(n-1) + F(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the number of terms to display
    std::cout << "Enter the number of terms in the Fibonacci series: ";
    std::cin >> n;

    // Display the Fibonacci series using recursion
    std::cout << "Fibonacci Series up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    std::cout << std::endl;

    return 0;
}

//sorting array
#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int a[n];

    for(int i=0;i<=n;i++){

    cin >> a[i];

    }  

    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){

            if(a[i]>a[j]){   // by changing > to < 
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

        }
    }
    for(int i=0;i<=n;i++){
        cout<<a[i]<<"\n";


    }

}


//
#include <iostream>
#include <iomanip> // For setprecision

const int NUM_SUBJECTS = 5;
const int MAX_STUDENTS = 100;

// Structure to represent a student
struct Student {
    int enrollmentNumber;
    std::string name;
    int marks[NUM_SUBJECTS];
    float percentage;
};

// Function to calculate percentage
float calculatePercentage(const int marks[NUM_SUBJECTS]) {
    int totalMarks = 0;

    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        totalMarks += marks[i];
    }

    return static_cast<float>(totalMarks) / NUM_SUBJECTS;
}

int main() {
    int numStudents;

    // Input the number of students
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    // Check for the maximum number of students
    if (numStudents > MAX_STUDENTS) {
        std::cerr << "Error: Maximum number of students exceeded." << std::endl;
        return 1; // Exit with an error code
    }

    // Array of structures to store student information
    Student students[MAX_STUDENTS];

    // Input student information and marks
    for (int i = 0; i < numStudents; ++i) {
        // Input student details
        std::cout << "Enter enrollment number for student " << i + 1 << ": ";
        std::cin >> students[i].enrollmentNumber;

        std::cout << "Enter name for student " << i + 1 << ": ";
        std::cin.ignore(); // Clear the newline character from the previous input
        std::getline(std::cin, students[i].name);

        // Input marks for 5 subjects
        std::cout << "Enter marks for 5 subjects for student " << i + 1 << ":" << std::endl;
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            std::cout << "Subject " << j + 1 << ": ";
            std::cin >> students[i].marks[j];
        }

        // Calculate and store percentage
        students[i].percentage = calculatePercentage(students[i].marks);
    }

    // Print student information and percentage
    std::cout << "\nStudent Information:\n";

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Enrollment Number: " << students[i].enrollmentNumber << std::endl;
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Percentage: " << std::fixed << std::setprecision(2) << students[i].percentage << "%" << std::endl;
        std::cout << std::endl; // Separate entries for different students
    }

    return 0;
}

#include <iostream>

// Define a union named MyUnion
union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    // Declare a variable of type MyUnion
    MyUnion myUnion;

    // Assign values to the members of the union
    myUnion.intValue = 42;
    std::cout << "Integer value: " << myUnion.intValue << std::endl;

    myUnion.floatValue = 3.14f;
    std::cout << "Float value: " << myUnion.floatValue << std::endl;

    myUnion.charValue = 'A';
    std::cout << "Char value: " << myUnion.charValue << std::endl;

    // The union shares the same memory, so changing one member affects the others
    std::cout << "After updating charValue, Integer value: " << myUnion.intValue << std::endl;
    std::cout << "After updating charValue, Float value: " << myUnion.floatValue << std::endl;

    return 0;
}

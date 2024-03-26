#include <iostream>
using namespace std;
// Declare an integer variable to store the year value
int main(){
int year;
// Read the year value from the user input
cout << "Enter a year: ";
cin >> year;

// Check if the year is divisible by 4 but not by 100, or if the year is divisible by 400
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    // Display the result as "leap year"
    cout << year << " is a leap year" << endl;
} else {
    // Display the result as "not leap year"
    cout << year << " is not a leap year" << endl;
}
}
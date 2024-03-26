#include <iostream>
using namespace std;

//to print distinct elements in an array



void printDistinctElements(int arr[], int size) {
    printf("Distinct elements in the array: ");

    for (int i = 0; i < size-1; i++) {
        // Check if arr[i] is unique in the array
        int isDistinct = 1;

        for (int j = 0; j < i;j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0; // arr[i] is not distinct
                break;
            }
        }

        // If arr[i] is distinct, print it
        if (isDistinct) {
            cout<<arr[i];
        }
    }

    cout<<"\n";
}

int main() {
    const int size = 8;  // Adjust the size as needed
    int myArray[size];

    // Input elements into the array
    cout<<"Enter elements for the array:\n";
    for (int i = 0; i < size-1; i++) {
        cout<<"Element : "<< (i + 1);
        cin>>myArray[i];
    }

    // Print distinct elements in the array
    printDistinctElements(myArray, size);

    return 0;
}


//to count total no. of duplicate elemnts in an array
int COUNT_DUPLICATE(const int arr[],int size){
    int count =0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Found a duplicate element
                count++;
                break;  // Break to avoid counting the same element multiple times
            }
        }
    }

    return count;
}

int main(){
    const int size=5;
    int myarr[size];
    cout<<"Enter elements for the array:\n";
    for (int i = 0; i < size-1; i++) {
        cout<<"Element : "<< (i + 1);
        cin>>myarr[i];
    }
int duplicatecount = COUNT_DUPLICATE(myarr,size);
cout << "Total number of duplicate elements in the array: " << COUNT_DUPLICATE<<endl;

    return 0;
}

//to find the maximum elements in an array
#include <iostream>

void findMaxAndMin(const int arr[], int size, int& maxElement, int& minElement) {
    // Initialize max and min with the first element of the array
    maxElement = minElement = arr[0];

    // Iterate through the array to find max and min
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        } else if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
}

int main() {
    const int size = 8;  // Adjust the size as needed
    int myArray[size];

    // Input elements into the array
    std::cout << "Enter " << size << " elements for the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Find maximum and minimum elements in the array
    int maxElement, minElement;
    findMaxAndMin(myArray, size, maxElement, minElement);

    // Display the results
    std::cout << "Maximum element in the array: " << maxElement << std::endl;
    std::cout << "Minimum element in the array: " << minElement << std::endl;

    return 0;
}


//to find the length of a string without using the library function
#include <iostream>

int stringLength(const char* str) {
    int length = 0;

    // Iterate through the characters until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    const int maxLength = 100;  // Adjust the maximum length as needed
    char inputString[maxLength];

    // Input a string
    std::cout << "Enter a string: ";
    std::cin.getline(inputString, maxLength);

    // Find and display the length of the string
    int length = stringLength(inputString);
    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}

// to find the frequency of a given character in the string
#include <iostream>

int findFrequency(const std::string& str, char target) {
    int frequency = 0;

    for (char ch : str) {
        if (ch == target) {
            frequency++;
        }
    }

    return frequency;
}

int main() {
    std::string inputString;
    char targetChar;

    // Input a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Input the character to find its frequency
    std::cout << "Enter the character to find its frequency: ";
    std::cin >> targetChar;

    // Find and display the frequency of the target character
    int frequency = findFrequency(inputString, targetChar);
    std::cout << "Frequency of '" << targetChar << "' in the string: " << frequency << std::endl;

    return 0;
}

//C++ program that finds the reverse of any number using recursion:
#include <iostream>

// Recursive function to find the reverse of a number
int reverseNumber(int num, int reversedNum = 0) {
    // Base case: when the original number becomes 0
    if (num == 0) {
        return reversedNum;
    }

    // Extract the rightmost digit
    int lastDigit = num % 10;

    // Update the reversed number
    reversedNum = reversedNum * 10 + lastDigit;

    // Recursive call with the remaining digits
    return reverseNumber(num / 10, reversedNum);
}

int main() {
    int number;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Call the recursive function to find the reverse
    int reversedNumber = reverseNumber(number);

    // Display the result
    std::cout << "Reverse of the number: " << reversedNumber << std::endl;

    return 0;
}

//tocheck whether a number is a palindrome using recursion
// Recursive function to check if a string is a palindrome
#include <iostream>

#include <string>

#include <algorithm>

bool isPalindrome(const std::string & text, int start, int end) {
  // Base case: when start >= end, the string is a palindrome
  if (start >= end)
    return true;

  // Recursive case: check if the characters at start and end indices are equal,
  // and recursively check the remaining characters
  if (text[start] != text[end])
    return false;

  return isPalindrome(text, start + 1, end - 1);
}

int main() {
  std::string text;
  std::cout << "Input a string: ";
  std::getline(std::cin, text);

  // Remove any spaces from the input string
  text.erase(std::remove(text.begin(), text.end(), ' '), text.end());

  // Check if the string is a palindrome using recursion
  bool palindrome = isPalindrome(text, 0, text.length() - 1);

  if (palindrome)
    std::cout << "The string is a palindrome." << std::endl;
  else
    std::cout << "The string is not a palindrome." << std::endl;

  return 0;
}


//
// Recursive function to calculate the sum of digits
#include <iostream>

int sumOfDigits(int number) {
  // If the number is a single digit, return the number itself
  if (number >= 0 && number <= 9)
    return number;

  // Recursive case: Calculate the sum of the last digit and the sum of the rest of the digits
  return (number % 10) + sumOfDigits(number / 10);
}

int main() {
  int n;
  std::cout << "Input a number: ";
  std::cin >> n;

  // Calculate the sum of digits using recursion
  int sum_digits = sumOfDigits(n);

  std::cout << "Sum of digits of " << n << " is: " << sum_digits << std::endl;

  return 0;
}



//Recursive function to reverse a string
#include <iostream>

#include <string>

// Recursive function to reverse a string
void reverse_String(std::string & text, int start, int end) {
  // Base case: when start >= end, the string is fully reversed
  if (start >= end)
    return;

  // Swap characters at start and end indices
  std::swap(text[start], text[end]);



  // Recursive case: move to the next pair of characters
  reverse_String(text, start + 1, end - 1);
}

int main() {
  std::string text;
  std::cout << "Input a string: ";
  std::getline(std::cin, text);

  // Reverse the string using recursion
  reverse_String(text, 0, text.length() - 1);

  std::cout << "Reversed string: " << text << std::endl;

  return 0;
}

//power of 2 using recursion
#include<iostream> 
using namespace std;

// Recursive function to calculate 2^n
int power(int n) {

    // Base case: if n is 0, return 1 (2^0 = 1)
    if(n == 0)
        return 1;

    // Recursive relation: 2^n = 2 * 2^(n-1)
    return 2 * power(n-1);    
}

int main() {

    int n;
    cin >> n; // Input the value of n

    // Calculate 2^n using the power function
    int ans = power(n);

    // Output the result
    cout << ans << endl;

    return 0; // Return 0 to indicate successful execution
}

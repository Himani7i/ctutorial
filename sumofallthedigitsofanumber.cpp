//Write a program to find the sum of all digits in a given number.
// Repeat this operationsuccessively until the result is a single digit


#include <iostream>
using namespace std;

int sumdig(int n) {
    int sum = 0;

    while (n != 0) {
        sum= sum + n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int no;

    
    cout << "Enterthenumber:/n ";
    cin >>no;

    while (no >= 10) {
        
        int digitsum = sumdig(no);

        cout << "Sum : " << digitsum <<endl;

        
        no= digitsum;
    }

   
    cout << "Thesingledigit: " << no<<endl;

    return 0;
}


#include <iostream>

#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;
int singledigitsum(int arr[], int n){
    int sum =0;
    for(int i =0; i<=n; i++)
    sum = sum + arr[i];
return sum;
}


int main()

{
    const int size;
    cout<<"enter the size of number: /n";
    cin>>size;
int arr[size];
cout<<"enter the no."<<endl;
for(int i=0; i<=size; i++){
    cin>>arr[i];
}
int sumofdigits = singledigitsum(arr,size);
cout<<"sumofdigits"<<sumofdigits<<endl;
return 0;
}

#include <iostream>

// Recursive function to calculate the sum of array elements
int arraySum(int arr[], int size) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: return the sum of the last element and the sum of the rest of the array
  return arr[size - 1] + arraySum(arr, size - 1);
}

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


int main() {
  int nums[] = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10
  };
  int size = sizeof(nums) / sizeof(nums[0]);

  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Calculate the sum of the array elements using recursion
  int sum = arraySum(nums, size);

  std::cout << "\nSum of array elements using recursion: " << sum << std::endl;

  return 0;
}

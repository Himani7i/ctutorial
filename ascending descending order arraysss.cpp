#include <iostream>
using namespace std;
// Declare an array of integers to store the list of numbers
int arr[] = {5, 3, 8, 2, 9, 1, 4, 7, 6};
// Declare an integer variable to store the size of the array
int size = sizeof(arr) / sizeof(arr[0]);
// Declare an integer variable to store a temporary value for swapping
int temp;

// Sort the array in ascending order using bubble sort algorithm
// Loop from 0 to size - 2 using a for loop
for (int i = 0; i < size - 1; i++) {
    // Loop from 0 to size - i - 2 using a for loop
    for (int j = 0; j < size - i - 1; j++) {
        // Check if the current element is greater than the next element
        if (arr[j] > arr[j + 1]) {
            // Swap the current element and the next element
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}

// Display the array in ascending order
cout << "The array in ascending order is: ";
// Loop from 0 to size - 1 using a for loop
for (int i = 0; i < size; i++) {
    // Print the current element followed by a space
    cout << arr[i] << " ";
}
// Print a new line after the loop
cout << endl;

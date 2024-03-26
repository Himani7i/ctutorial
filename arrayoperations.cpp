#include <iostream>

void insertElement(int arr[], int& size, int element, int position) {
    // Check if position is valid
    if (position < 0 || position > size) {
        std::cout << "Invalid position\n";
        return;
    }
    
    // Shift elements to the right from position to make space for new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
        // copies the element at index i - 1 to index i
    }
    
    // Insert the new element at the specified position
    arr[position] = element;
    
    // Increment the size of the array
    size++;
}

void deleteElement(int arr[], int& size, int position) {
    // Check if position is valid
    if (position < 0 || position >= size) {
        std::cout << "Invalid position\n";
        return;
    }
    
    // Shift elements to the left from position to overwrite the element to be deleted
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Decrement the size of the array
    size--;
}


//deletion main prorgam
int main() {
    int arr[100]; // Assuming array size is 100
    int size;
    
    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    // Input array elements
    std::cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    int position;
    // Input the position from where the element should be deleted
    std::cout << "Enter the position to delete the element: ";
    std::cin >> position;
    
    deleteElement(arr, size, position);
    
    // Print the updated array
    std::cout << "Array after deletion:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}


int main() {
    int arr[100]; // Assuming array size is 100
    int size;
    
    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
    // Input array elements
    std::cout << "Enter array elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    
    int element, position;
    // Input the element to be inserted
    std::cout << "Enter the element to insert: ";
    std::cin >> element;
    
    // Input the position where the element should be inserted
    std::cout << "Enter the position to insert the element: ";
    std::cin >> position;
    
    insertElement(arr, size, element, position);
    
    // Print the updated array
    std::cout << "Array after insertion:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    
    return 0;
}





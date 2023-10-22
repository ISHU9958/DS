#include <iostream>

// Function to perform linear search in an array
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target, result;

    std::cout << "Enter the element to search: ";
    std::cin >> target;

    result = linearSearch(arr, size, target);

    switch (result) {
        case -1:
            std::cout << "Element not found in the array." << std::endl;
            break;
        default:
            std::cout << "Element found at index " << result << "." << std::endl;
            break;
    }

    return 0;
}

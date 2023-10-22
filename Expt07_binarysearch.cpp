#include <iostream>

// Function to perform binary search in a sorted array
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found at index mid
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
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

    result = binarySearch(arr, size, target);

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

#include <iostream>
#include <vector>

const int MAX_SIZE = 100;  // Maximum size of the array

class DynamicArray {
private:
    std::vector<int> arr;

public:
    // Function to insert an element at the beginning of the array
    void insertAtBeginning(int element) {
        if (arr.size() < MAX_SIZE) {
            arr.insert(arr.begin(), element);
            std::cout << "Element " << element << " inserted at the beginning." << std::endl;
        } else {
            std::cout << "Overflow: Cannot insert element. Array is full." << std::endl;
        }
    }

    // Function to delete an element from the beginning of the array
    void deleteFromBeginning() {
        if (!arr.empty()) {
            int deletedElement = arr[0];
            arr.erase(arr.begin());
            std::cout << "Element " << deletedElement << " deleted from the beginning." << std::endl;
        } else {
            std::cout << "Underflow: Cannot delete element. Array is empty." << std::endl;
        }
    }

    // Function to display the current array
    void display() {
        if (!arr.empty()) {
            std::cout << "Current Array: ";
            for (int i : arr) {
                std::cout << i << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Array is empty." << std::endl;
        }
    }
};

int main() {
    DynamicArray dynamicArr;
    int choice, element;

    while (true) {
        std::cout << "1. Insert at beginning\n2. Delete from beginning\n3. Display array\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the element to insert: ";
                std::cin >> element;
                dynamicArr.insertAtBeginning(element);
                break;
            case 2:
                dynamicArr.deleteFromBeginning();
                break;
            case 3:
                dynamicArr.display();
                break;
            case 4:
                exit(0);
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}

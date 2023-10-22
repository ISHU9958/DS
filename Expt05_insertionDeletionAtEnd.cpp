#include <iostream>
#include <vector>

const int MAX_SIZE = 100;  // Maximum size of the array

class DynamicArray {
private:
    std::vector<int> arr;

public:
    // Function to insert an element at the end of the array
    void insertAtEnd(int element) {
        if (arr.size() < MAX_SIZE) {
            arr.push_back(element);
            std::cout << "Element " << element << " inserted at the end." << std::endl;
        } else {
            std::cout << "Overflow: Cannot insert element. Array is full." << std::endl;
        }
    }

    // Function to delete an element from the end of the array
    void deleteFromEnd() {
        if (!arr.empty()) {
            int deletedElement = arr.back();
            arr.pop_back();
            std::cout << "Element " << deletedElement << " deleted from the end." << std::endl;
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
        std::cout << "1. Insert at end\n2. Delete from end\n3. Display array\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the element to insert: ";
                std::cin >> element;
                dynamicArr.insertAtEnd(element);
                break;
            case 2:
                dynamicArr.deleteFromEnd();
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

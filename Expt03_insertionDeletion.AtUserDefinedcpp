#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

void displayArray(vector<int> &arr, int size)
{
    cout << "Current Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertAtLocation(vector<int> &arr, int &size, int location, int value)
{
    if (size == MAX_SIZE)
    {
        cout << "Array Overflow: Cannot insert element, array is full." << endl;
        return;
    }

    if (location < 0 || location > size)
    {
        cout << "Invalid location for insertion. Array remains unchanged." << endl;
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > location; i--)
        arr[i] = arr[i - 1];

    arr[location] = value;
    size++;

    cout << "Element " << value << " inserted at location " << location << "." << endl;
}

void deleteAtLocation(vector<int> &arr, int &size, int location)
{
    if (size == 0)
    {
        cout << "Array Underflow: Cannot delete element, array is empty." << endl;
        return;
    }

    if (location < 0 || location >= size)
    {
        cout << "Invalid location for deletion. Array remains unchanged." << endl;
        return;
    }

    int deletedValue = arr[location];

    // Shift elements to the left to fill the gap from the deleted element
    for (int i = location; i < size - 1; i++)
        arr[i] = arr[i + 1];

    size--;

    cout << "Element " << deletedValue << " deleted from location " << location << "." << endl;
}

int main()
{
    vector<int> arr(MAX_SIZE, 0); // Initialize the array with zeros
    int size = 0;                 // Current size of the array

    int choice, value, location;

    while (true)
    {
        cout << "\nMenu:" << endl;
        cout << "1. Insert element" << endl;
        cout << "2. Delete element" << endl;
        cout << "3. Display array" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to insert: ";
            cin >> value;
            cout << "Enter the location to insert: ";
            cin >> location;
            insertAtLocation(arr, size, location, value);
            break;

        case 2:
            cout << "Enter the location to delete: ";
            cin >> location;
            deleteAtLocation(arr, size, location);
            break;

        case 3:
            displayArray(arr, size);
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

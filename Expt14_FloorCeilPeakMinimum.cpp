#include <iostream>
#include <vector>

using namespace std;

int findFloor(const vector<int>& arr, int target) {
    int left = -1;
    int right = arr.size() - 1;
    int floorValue = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            floorValue = arr[mid];
            break;
        } else if (arr[mid] < target) {
            floorValue = arr[mid];
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return floorValue;
}

int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int target = 5;

    int floorValue = findFloor(arr, target);

    if (floorValue != -1) {
        cout << "The floor value of " << target << " is: " << floorValue << endl;
    } else {
        cout << "No floor value found for " << target << " in the array." << endl;
    }

    return 0;
}

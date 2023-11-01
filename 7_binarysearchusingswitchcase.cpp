#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;  // Element found at index mid
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // Element not found
}

int main() {
    int size;
    cout << "Enter the size of the sorted array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the sorted elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target, result;

    cout << "Enter the element to search: ";
    cin >> target;

    result = binarySearch(arr, size, target);

    switch (result) {
        case -1:
            cout << "Element not found in the array." << endl;
            break;
        default:
            cout << "Element found at index " << result << "." << endl;
            break;
    }

    return 0;
}

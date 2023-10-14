#include <iostream>
#include <climits>
using namespace std;

int findSecondSmallest(int arr[], int size) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return secondSmallest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int secondSmallest = findSecondSmallest(arr, size);

    if (secondSmallest == INT_MAX) {
        cout << "There is no second smallest element in the array." << endl;
    } else {
        cout << "The second smallest element in the array is: " << secondSmallest << endl;
    }

    return 0;
}

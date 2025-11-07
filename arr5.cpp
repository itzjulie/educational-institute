/* find target elements in array*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Element " << target << " found in the array." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
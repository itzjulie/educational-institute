/* minimum of array element */
#include <iostream>
using namespace std;
int main() {
    int arr[] = {15, 22, 8, 19, 31};
    int min = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Minimum of array elements: " << min << endl;
    return 0;
}

/* maximum of array elements*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {15, 22, 8, 19, 31};
    int max = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
     {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    cout << "Maximum of array elements: " << max << endl;
    return 0;
}

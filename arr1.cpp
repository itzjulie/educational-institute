/*sum abd avg of array elements*/
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++)
     {
        sum += arr[i];
    }
    int average = sum / size;
    cout<<"size of array elements: "<<size<<endl;
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;
    return 0;
}

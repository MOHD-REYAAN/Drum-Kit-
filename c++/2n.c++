#include <iostream>
#include <array>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i; // Found
        }
    }
    return -1; // Not found
}

int main() {
    int arr[] = {5, 8, 1, 3, 9};
   cout<< arr.size();
    int target = 3;

    int result = linearSearch(arr, n, target);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";
}

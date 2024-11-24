#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currentSum = arr[0]; // Initialize with the first element
    int maxSum = arr[0];     // Initialize maxSum with the first element

    for (int i = 1; i < n; i++) {
        // Update currentSum to include the current element or start a new subarray
        currentSum = max(arr[i], currentSum + arr[i]);
        // Update maxSum if currentSum is greater
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}

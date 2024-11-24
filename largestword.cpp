#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cin.ignore();  // Ignore newline character left in the buffer

    char arr[n + 1];  // Declare the array with space for null terminator
    cout << "Enter the character array: ";
    cin.getline(arr, n + 1);

    int i = 0;
    int currlen = 0, maxlen = 0;

    while (1) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            if (currlen > maxlen) {
                maxlen = currlen;
            }
            currlen = 0;  // Reset current length for the next word
        } else {
            currlen++;  // Increment current length for the current word
        }
        
        if (arr[i] == '\0') {
            break;  // Exit the loop if the null terminator is encountered
        }
        
        i++;
    }

    cout << "The length of the longest word is: " << maxlen << endl;

    return 0;
}

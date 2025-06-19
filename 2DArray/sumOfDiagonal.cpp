#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the size of row in an array: ";
    cin >> row;

    cout<< "Enter the size of col in an array : ";
    cin >> col;

    // vector<int> arr[row][col];
    int arr[row][col];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    int first = 0;
    for (int i = 0; i < row; i++) {
        first += arr[i][i];
    }

    int second = 0;
    for (int i = 0; i < col; i++) {
        second += arr[i][col - i - 1];
    }
    
    cout << "The sum of the diagonal elements is: " << first <<", " << second << endl;
    return 0;
}
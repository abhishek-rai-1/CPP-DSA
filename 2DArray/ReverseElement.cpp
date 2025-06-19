#include <iostream>
#include <vector>
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

    // reversing the 2d array
    for(int i = 0; i < row; i++){
        int start = 0;
        int end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }

    // printing
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout<<arr[i][j] <<" ";
        cout<<endl;
    }
}
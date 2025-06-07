#include <iostream>
using namespace std;

int findIndex(int arr[], int index, int length) {
    for(int i = index + 1; i < length; i++){
        if(arr[i] < arr[index])
            index = i;
    }
    return index;
}

int main(){

    int arr[] = {10, 8, 2, 3, 1, 4};

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length - 1; i++){
        int index = i;
        int smallestIndex = findIndex(arr, index, length);
        swap(arr[i], arr[smallestIndex]);
    }

    // printing
    for(int i = 0; i < length; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
#include <iostream>
using namespace std;

int main(){
    int arr[] = {2, 7, 4, 11, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[n -1];

    for(int i = n -1; i > 0; i--)
        arr[i] = arr[i -1];
    arr[0] = temp;

    // printing
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
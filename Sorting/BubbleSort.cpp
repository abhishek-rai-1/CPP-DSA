#include <iostream>
using namespace std;

int main(){

    int arr[] = {10, 8, 2, 3, 1, 4};

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = length - 2; i >= 0; i--)
    {
        bool swaped = 0;
        for(int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = 1;
            }
        }
        if(swaped == 0)
            break;
    }

    // printing
    for(int i = 0; i < length; i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}
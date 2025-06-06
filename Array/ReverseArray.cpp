#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int value, search, index = -1;

    cout<<"Enter the value : ";
    cin>>value;

    cout <<"Enter the numbers in an array : ";
    for(int i = 0; i < value; i++)
        cin>>arr[i];

    int i = 0, j = value -1;

    // reversing
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    // printing
    for(int i = 0; i < value; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
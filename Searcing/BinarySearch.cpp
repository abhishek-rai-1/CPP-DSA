#include <iostream>
using namespace std;

/*

int BinarySearchOfIncreasingOrder(int arr[], int n, int search){

    int mid, start = 0, end = n -1;

    while(start <= end){
        mid = start + (end - start) / 2;
        if(arr[mid] == search)
            return mid;
        else if(arr[mid] > search)
            end = mid - 1;
        else 
            start = mid + 1;
    }

    return -1;
}

*/

int BinarySearchOfDecreasingOrder(int arr[], int n, int search){

    int mid, start = 0, end = n -1;

    while(start <= end){
        mid = start + (end - start) / 2;
        if(arr[mid] == search)
            return mid;
        else if(arr[mid] > search)
            start = mid + 1;
        else 
            end = mid - 1;
    }

    return -1;
}

int main(){
    int arr[1000];
    int n, search;
    cout<<"Enter the size of array : ";
    cin>>n;

    // for increasing order

    /*
    cout<<"Enter the "<<n <<" Elements in an array in sorted order: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the element you want to find : ";
    cin>>search;

    int ans = BinarySearchOfIncreasingOrder(arr, n, search);

    if(ans == -1)
        cout<<"Element is not found"<<endl;
    else
        cout<<"Element is present at "<< ans<< " position"<<endl;
    */

    // for decreasing order
    cout<<"Enter the "<<n <<" Elements in an array in decreasing order: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the element you want to find : ";
    cin>>search;

    int ans = BinarySearchOfDecreasingOrder(arr, n, search);

    if(ans == -1)
        cout<<"Element is not found"<<endl;
    else
        cout<<"Element is present at "<< ans<< " position"<<endl;
}
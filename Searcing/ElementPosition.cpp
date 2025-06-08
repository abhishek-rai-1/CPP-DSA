#include <iostream>
using namespace std;

int ElementIndex(int arr[], int n, int target){
    int  mid, start = 0, end = n -1, position = n;

    while (start <= end)   
    {
        mid = start + (end - start) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            start = mid + 1;
        else{
            position = mid;
            end = mid - 1;
        }
    }
    return position;
}

int main(){
    int arr[] = {1, 4, 6, 8, 10, 14, 16, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    int position = ElementIndex(arr, n, target);
    cout<<"the element should present at index : " << position <<endl;
}
#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target, bool findFirst, bool findLast){
    int mid, occuranceIndex = -1, start = 0, end = n -1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if(arr[mid] == target){
            occuranceIndex = mid;
            if(findFirst)
                end = mid -1;
            else
                start = mid + 1;
        }
        else if(arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return occuranceIndex;
}

int main(){
    int arr[] = {5, 7, 7, 8, 8, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int firstPosition = BinarySearch(arr, n, target, true, false);
    int lastPosition = BinarySearch(arr, n, target, false, true);
    cout<<firstPosition <<","<< lastPosition <<endl;
}
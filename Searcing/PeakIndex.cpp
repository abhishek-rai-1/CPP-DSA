#include <iostream>
using namespace std;

int PeakIndex(int arr[], int n){
    int start = 0, end = n -1, peak = n -1, mid;

    while (start <= end)
    {
        mid = end + (start - end) / 2;

        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
            return mid;
        else if(arr[mid] < arr[mid + 1])
            start = mid + 1;
        else{
            peak = mid;
            end = mid - 1;
        }
    }
    return peak;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 89, 90, 56, 45, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = PeakIndex(arr, n);
    cout<<"the peak element index is at position "<<ans << " and element is "<< arr[ans] <<endl;
}
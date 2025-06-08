#include <iostream>
using namespace std;

int RotatedArrayMinIndex(int arr[], int n){
    int start = 0, end = n -1, ans = 0, mid;

    while (start <= end)
    {
        mid = end + (start - end) / 2;

        if(arr[mid] >= arr[0])
            start = mid + 1;
        else{
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {4, 6, 8, 10, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = RotatedArrayMinIndex(arr, n);
    cout<<"the minimum element index is at position "<<ans << " and element is "<< arr[ans] <<endl;
}
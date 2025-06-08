#include <iostream>
using namespace std;

int RotatedArrayMinIndex(int arr[], int n, int target){
    int start = 0, end = n -1, ans = -1, mid;

    while (start <= end)
    {
        mid = end + (start - end) / 2;

        if(arr[mid] == target)
            return mid;
            
        else if(arr[mid] >= arr[0]){
            if(arr[start] <= target && target <= arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else{
            if(arr[mid] <= target && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {4, 6, 8, 10, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int ans = RotatedArrayMinIndex(arr, n, target);
    cout<<"the minimum element index is at position "<<ans <<endl;
}
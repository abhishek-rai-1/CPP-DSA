#include <iostream>
using namespace std;

int KthMissing(int arr[], int n, int k){
    int start = 0, end = n -1, mid, ans = n;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if(arr[mid] - mid - 1 >= k){
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    
    return ans + k;
}

int main(){
    int arr[] = {2, 3, 4, 7, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout<<"Enter the kth number : ";
    cin>>k;
    int ans = KthMissing(arr, n, k);
    cout<<ans<<endl;
}
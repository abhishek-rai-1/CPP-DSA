#include <iostream>
using namespace std;

int MaxDiff(int arr[], int n){
    int suffix = arr[n -1], difference, ans = INT16_MIN;
    for(int i = n -2; i >= 0; i--){
        difference = suffix - arr[i];
        ans = max(ans, difference);
        suffix = max(suffix, arr[i]);
    }
    return ans;
}

int main(){
    int arr[] = {9, 5, 8, 12, 2, 3, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = MaxDiff(arr, n);
    cout<<ans<<endl;
}
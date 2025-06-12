#include <iostream>
using namespace std;

int kadans(int arr[], int n){
    int maxi = INT32_MIN, prefix = 0;
    for(int i = 0; i < n; i++){
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if(prefix < 0)
            prefix = 0;
    }
    return maxi;
}

int main(){
    int arr[] = {3, 4, -5, 8, -12, 7, 6, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = kadans(arr, n);
    cout<<ans<<endl;
}
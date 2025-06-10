#include <iostream>
using namespace std;

int giveSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int bookAllocation(int arr[], int n, int m){

    if(m > n)   return -1;

    int start = 0, end = giveSum(arr, n), mid, ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int page = 0, count = 1;
        for(int i = 0; i < n; i++){
            page += arr[i];
            if(page > mid){
                count++;
                page = arr[i];
            }
        }
        if(count <= m){
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main(){
    int arr[1000];
    int n, m;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the element in an array : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter the number of persons : ";
    cin>>m;
    int ans = bookAllocation(arr, n, m);
    cout<<ans<<endl;
}

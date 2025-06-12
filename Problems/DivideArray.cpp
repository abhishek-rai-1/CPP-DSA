#include <iostream>
#include <vector>
using namespace std;

// divide the array in to two part where the sum is equal 
int divideArray(vector<int> &arr, int n){
    
    int total_sum = 0;
    for(int i = 0; i < n; i++)
        total_sum += arr[i];

    int prefix_sum = 0;

    for(int i = 0; i < n -1; i++){
        prefix_sum += arr[i];
        if(prefix_sum == total_sum - prefix_sum)
            return i;
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int ans = divideArray(arr, n);
    if(ans == -1)
        cout<<"the subarray is not possible with equal sum"<<endl;
    cout<<"the subarray is posible from index : " << ans <<endl;
}
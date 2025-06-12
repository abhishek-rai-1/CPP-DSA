#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int SumOf3Variable(vector<int>arr, int n, int target){

    sort(arr.begin(), arr.end());

    if(n < 3)
        return 0;

    for(int i = 0; i < n -2; i++){
        int start = i + 1, end = n -1, ans = target - arr[i];
        while (start < end)
        {
            if(arr[start] + arr[end] == ans)
                return 1;
            else if(arr[start] + arr[end] > ans)
                end--;
            else
                start++;
        }
    }
    return 0;
}

int main(){
    int n, target;
    cout<<"Enter the size of an array : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
    
    cout<<"Enter the target : ";
    cin>>target;

    int ans = SumOf3Variable(arr, n, target);
    cout<<ans<<endl;
}
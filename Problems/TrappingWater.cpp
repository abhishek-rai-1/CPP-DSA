#include <iostream>
#include <vector>
using namespace std;

int findMaxIndex(vector<int>arr, int n){
    int maxi = INT32_MIN, maxindex;
    for(int i = 0; i < n; i++){
        if(max(maxi, arr[i]) > maxi){
            maxi = max(maxi, arr[i]);
            maxindex = i;
        }
    }
    return maxindex;
}

int TrapeWater(vector<int>arr, int n){

    int maxindex = findMaxIndex(arr, n);
    int leftmax = 0, rightmax = 0, water = 0;

    for(int i = 0; i < maxindex; i++){
        if(leftmax - arr[i] > 0)
            water += leftmax - arr[i];
        else
            leftmax = max(leftmax, arr[i]);
    }

    for(int i = n -1; i > maxindex; i--){
        if(rightmax - arr[i] > 0)
            water += rightmax - arr[i];
        else
            rightmax = max(rightmax, arr[i]);
    }

    return water;
}

int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the elements : ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int ans = TrapeWater(arr, n);
    cout<<"the maximum water can be trapped is : "<< ans <<endl;
}
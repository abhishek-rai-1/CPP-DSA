#include <iostream>
#include <math.h>
using namespace std;

int findMax(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++)
        ans = max(ans, arr[i]);
    return ans;
}

int koko (int arr[], int size, int hours){
    int start = 0, end = findMax(arr, size), mid, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int eatingHour = 0;
        for(int i = 0; i < size; i++){
            eatingHour += arr[i] / mid;
            if(arr[i] % mid)
                eatingHour++;
        }
        if(eatingHour > hours)
            start = mid + 1;
        else{
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[1000];
    int size, hours;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element in an array : ";
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    cout<<"Enter the number of hours : ";
    cin>>hours;
    int ans = koko(arr, size, hours);
    cout<<ans<<endl;
}
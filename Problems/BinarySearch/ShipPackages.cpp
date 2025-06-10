#include <iostream>
using namespace std;

int giveSum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int shipPackages (int arr[], int size, int days){
    int start = 1, end = giveSum(arr, size), ans, mid;

    while(start <= end){
        mid = start + (end - start) / 2;
        int package = 0, day = 1;
        for(int i = 0; i < size; i++){
            package += arr[i];
            if(package > mid){
                day++;
                package = arr[i];
            }
        }
        if(day <= days){
            end = mid - 1;
            ans = mid;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main(){
    int arr[1000];
    int size, days;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the positive element in an array : ";
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    cout<<"Enter the number of days : ";
    cin>>days;
    int ans = shipPackages(arr, size, days);
    cout<<ans<<endl;
}
#include <iostream>
using namespace std;

void sort(int *arr, int size){

    for(int i = size - 2; i >= 0; i--)
    {
        bool swaped = 0;
        for(int j = 0; j <= i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = 1;
            }
        }
        if(swaped == 0)
            break;
    }
    // return arr;
}

int solve(int arr[], int size, int k){
    if(k > size)    return -1;

    int start = 1, end, mid, ans;
    sort(arr, size);
    end = arr[size -1] - arr[0];
    while(start <= end){
        mid = start + (end - start) / 2;
        int count = 1, pos = arr[0];
        for(int i = 1; i < size; i++){
            if(pos + mid <= arr[i]){
                count++;
                pos = arr[i];
            }
        }
        if(count < k)
            end = mid - 1;
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[1000];
    int size, cows;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the element in an array : ";
    for(int i = 0; i < size; i++)
        cin>>arr[i];
    cout<<"Enter the number of cows : ";
    cin>>cows;
    int ans = solve(arr, size, cows);
    cout<<ans<<endl;
}

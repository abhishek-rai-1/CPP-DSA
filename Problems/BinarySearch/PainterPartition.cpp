#include <iostream>
using namespace std;

int giveSum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int PainterPainting (int arr[], int n, int m){
    if(m > n)   return -1;

    int start = 1, end = giveSum(arr, n), mid, ans;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int paint = 0, person = 1;
        for(int i = 0; i < n; i++){
            paint += arr[i];
            if(paint > mid){
                person++;
                paint = arr[i];
            }
        }
        if(person <= m){
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
    int ans = PainterPainting(arr, n, m);
    cout<<ans<<endl;
}
#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    int n;

    cout<<"Enter the value : ";
    cin>>n;

    for(int i = 2; i < n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    cout<<arr[n -1]<<endl;
}
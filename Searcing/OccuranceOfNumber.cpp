#include <iostream>
using namespace std;

int OccuranceOfNumber(int arr[], int n, int search, bool findFirst, bool findLast){
    int start = 0, end = n -1, mid, ans;
    while (start <= end)
    {
        mid = start + (end - start)/2; 
        if(arr[mid] == search){
            ans = mid;
            if(findFirst)
                end = mid - 1;
            else
                start = mid + 1;
        }
        else if(arr[mid] < search)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return ans;
}

int main(){
    int arr[1000];
    int n, search;
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the "<<n <<" Elements in an array in increasing order: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"Enter the element you want to find the occurance: ";
    cin>>search;

    int firstOccurance = OccuranceOfNumber(arr, n, search, true, false);
    int lastOccurance = OccuranceOfNumber(arr, n, search, false, true);
    cout<<"the element is present "<< lastOccurance - firstOccurance + 1<< " times in an array"<<endl;
}
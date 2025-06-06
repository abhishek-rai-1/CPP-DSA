#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int value, search, index = -1;

    cout<<"Enter the value : ";
    cin>>value;

    cout <<"Enter the numbers in an array : ";
    for(int i = 0; i < value; i++)
        cin>>arr[i];

    cout<<"Enter the element you wan't to search : ";
    cin>> search;

    // searching
    for(int i = 0; i < value; i++){
        if(arr[i] == search){
            index = i;
            break;
        }  
    }
    cout<< index <<endl;
}

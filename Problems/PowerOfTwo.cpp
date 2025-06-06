#include<iostream>
using namespace std;

int main(){
    int num, count = 0;
    cout<<"Enter the number: ";
    cin>>num;

    for(int i = 0; i < 32; i++){
        if(num & 1)
            count++;
        num = num >> 1;
    }
    if(count > 1)
        cout<< false <<endl;
    else
        cout<< true <<endl;
}
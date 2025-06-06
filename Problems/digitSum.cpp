#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    while(num > 9){
        int ans = 0, rem;
        while(num){
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }
        num = ans;
    }

    cout<<"The sum of the digit is : "<<num<<endl;
}
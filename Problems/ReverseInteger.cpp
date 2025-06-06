#include<iostream>
using namespace std;

int main(){
    int num, rem, ans = 0, mul = 1;
    cout<<"Enter the number: ";
    cin>>num;

    while(num){
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
        mul = mul * 10;
    }

    cout<<"reversed integer is : "<<ans<<endl;
}
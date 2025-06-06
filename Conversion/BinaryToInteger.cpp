#include<iostream>
using namespace std;

int main(){
    int num, rem, mul = 1, ans = 0;

    cout << "Enter the binary number : ";
    cin>>num;

    while(num){
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }

    cout<<"the decimal number is : "<<ans<<endl;
}
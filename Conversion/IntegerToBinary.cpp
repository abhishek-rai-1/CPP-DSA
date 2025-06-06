#include<iostream>
using namespace std;

int main(){
    int num, rem, mul = 1, ans = 0;

    cout << "Enter the number : ";
    cin>>num;

    while(num > 0){
        rem = num % 2;  // num & 1
        num = num / 2;    // num >> 1
        ans = rem * mul + ans;
        mul = mul*10;
    }

    cout<<"the binary representation is : "<<ans<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int num, rem, mul = 1, ans = 0;

    cout << "Enter the number : ";
    cin>>num;

    while(num){
        rem = num % 8;
        num = num / 8;
        ans = rem * mul + ans;
        mul = mul * 10;
    }

    cout<<"the octal representation is : "<<ans<<endl;
}
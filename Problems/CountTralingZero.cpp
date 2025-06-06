#include <iostream>
using namespace std;

int trailingZero(int num){
    int ans = 0;
    while(num >= 5){
        ans += num / 5;
        num /=5;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;

    cout<<"the trailing zero in the number "<< n <<" is : " << trailingZero(n) <<endl;
}
#include <iostream>
#include <math.h>
using namespace std;

int count(int num){
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

bool Armstrong(int num, int digit){
    int rem, ans = 0, temp = num;

    while (num)
    {
        rem = num % 10;
        num = num / 10;
        ans = pow(rem, digit) + ans;
    }
    if(temp == ans)
        return true;
    return false;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int digit = count(num);
    bool checkArmstrong = Armstrong(num, digit);
    cout<<checkArmstrong<<endl;
}
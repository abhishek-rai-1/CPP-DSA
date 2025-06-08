#include <iostream>
using namespace std;

int findSqrt(int n){
    int start = 1, end = n, mid, ans;

    while(start <= end){
        mid = start + (end - start) / 2;
        if(mid * mid == n)
            return mid;
        else if(mid * mid > n)
            end = mid - 1;
        else{
            ans = mid;
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = findSqrt(n);
    cout<<"The square root of the number "<< n <<" is : "<< ans <<endl;
}
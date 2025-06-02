#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>> n;

    int num = 1;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }   

    return 0;
}
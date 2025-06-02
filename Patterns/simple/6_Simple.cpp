#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>> n;

    for(int row = 0; row < n; row++){
        for(int col = 1; col <= n; col++)
            cout<<char ('a' + row) <<" ";
        cout<<endl;
    }   

    return 0;
}
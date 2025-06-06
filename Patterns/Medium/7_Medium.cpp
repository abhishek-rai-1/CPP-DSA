#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>> n;

    for(int row = n; row >= 1; row--){
        for(int col = 1; col <= row; col++)
            cout<<col<<" ";
        cout<<endl;
    }
}
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>> n;

    for(int row = 1; row <= n; row++){
        for(int col = row; col > 0; col--)
            cout<<col <<" ";
        cout<<endl;
    }
}
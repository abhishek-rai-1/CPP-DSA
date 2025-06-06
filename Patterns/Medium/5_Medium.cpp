#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the number: ";
    cin>> n;

    for(int row = 1; row <= n; row++){
        char ch = 'a' + (row - 1);
        for(int col = 1; col <= row; col++)
            cout<< ch <<" ";
        cout<<endl;
    }
}
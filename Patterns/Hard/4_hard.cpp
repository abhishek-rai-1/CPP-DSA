#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    for(int row = 1; row <= n; row++){

        // spaces
        for(int space = 1; space <= n - row; space++)
            cout<<"  ";

        // alphabat
        for(char alph = 'A'; alph <= 'A' + (row -1); alph++)
            cout<< alph <<" ";
        cout<<endl;
    }
}
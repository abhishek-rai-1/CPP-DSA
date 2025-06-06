#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    for(int row = 1; row <= n; row++){

        // spaces
        for(int space = 1; space <= n -row; space++)
            cout<<"  ";
        
        // numbers
        for(int num = row; num >= 1; num--)
            cout<<num<<" ";
        cout<<endl;
    }
}
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
        
        // number
        for(int num = 1; num <= row; num++)
            cout<< num <<" ";
        
        // reverse number
        for(int rev = row -1; rev >= 1; rev--)
            cout<< rev <<" ";
        
        // next line
        cout<<endl;
    }
}
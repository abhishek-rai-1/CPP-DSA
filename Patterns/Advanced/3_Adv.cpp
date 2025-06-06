#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    for(int row = 1; row <= n; row++){

        // space
        for(int space = 1; space <= row -1; space++)
            cout<<"  ";
        
        // stars
        for(int star = 1; star <= 2*(n - row) + 1; star++)
            cout<<"* ";
        
        // next line
        cout<<endl;
    }
}
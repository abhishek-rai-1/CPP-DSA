#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    // increasing part

    for(int row = 1; row <= n; row++){

        // space
        for(int space = 1; space <= n-row; space++)
            cout<<" ";

        // star
        for(int star = 1; star <= row; star++)
            cout<<"* ";
        cout<<endl;
    }

    // decreasing part

    for(int row = n; row >= 1; row--){

        // space
        for(int space = 1; space <= n-row; space++)
            cout<<" ";

        // star
        for(int star = row; star >= 1; star--)
            cout<<"* ";
        cout<<endl;
    }
}
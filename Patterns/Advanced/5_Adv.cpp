#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    // increasing
    for(int row = 1; row <= n; row++){

        // star
        for(int star = 1; star <= row; star++)
            cout<<"* ";

        // space
        for(int space = 1; space <= 2*(n - row); space++)
            cout<<"  ";

        // star
        for(int star = 1; star <= row; star++)
            cout<<"* ";
        cout<<endl;
    }

    // decreasing
    for(int row = n - 1; row >= 1; row--){

        // star
        for(int star = 1; star <= row; star++)
            cout<<"* ";

        // space
        for(int space = 1; space <= 2*(n - row); space++)
            cout<<"  ";

        // star
        for(int star = 1; star <= row; star++)
            cout<<"* ";
        cout<<endl;
    }
}
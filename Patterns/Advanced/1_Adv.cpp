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
        
        // stars
        for(int star = 1; star <= 2*row -1; star++)   // 2*(row -1) + 1
            cout<<"* ";
        cout<<endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>> n;

    for(int row = n; row >= 1; row--){
        for(int col = row; col >= 1; col--)
            cout<<"* ";
        cout<<endl;
    }
}
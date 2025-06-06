#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>> n;

    for(int row = 5; row >= 1; row--){
        for(int col = row; col >= 1; col--)
            cout<<"* ";
        cout<<endl;
    }
}
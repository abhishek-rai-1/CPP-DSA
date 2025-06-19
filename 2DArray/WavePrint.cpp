#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row, col;
    cout << "Enter the size of row in an array: ";
    cin >> row;

    cout<< "Enter the size of col in an array : ";
    cin >> col;

    vector<vector<int>>matrix(row, vector<int>(col));

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // printing wave
    for(int j = 0; j < col; j++){
        if(j % 2 == 0){
            // print top to bottom
            for(int i = 0; i < row; i++)
                cout<<matrix[i][j] <<" ";
        }

        else{
            // print bottom to top
            for(int i = row -1; i >= 0; i--)
                cout<<matrix[i][j] <<" ";
        }
    }

    cout<<endl;
}
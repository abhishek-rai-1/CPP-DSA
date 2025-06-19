#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of col : ";
    cin>>col;

    if(row != col){
        cout<<"Enter the equal no. of row and col"<<endl;
    }

    else{

        vector<vector<int>>matrix(row, vector<int>(col));

        cout<<"Enter the elements in an array : ";
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                cin>>matrix[i][j];
            }
        }

        cout<<"matrix before transpose..."<<endl;

        for(int i = 0; i < row; i++){
            for(int j = 0; j <col; j++)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }

        // making transpose
        for(int i = 0; i < row; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        cout<<"matrix after transpose..."<<endl;

        // printing
        for(int i = 0; i < row; i++){
            for(int j = 0; j <col; j++)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }

    }
}
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

        cout<<"matrix before rotation..."<<endl;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) 
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }

        // transpose the matrix
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        // reverse the rows
        for(int i = 0; i < row; i++) {
            int start = 0, end = col -1;
            while(start < end){
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }

        // print the rotated matrix
        cout<<"Rotated matrix by 90 degrees clockwise is : "<<endl;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) 
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
}
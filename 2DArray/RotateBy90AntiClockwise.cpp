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

        // Transpose
        for(int i = 0; i < row; i++){
            for(int j = 0; j < i; j++)
                swap(matrix[i][j], matrix[j][i]);
        }

        // reverse the col
        for(int j = 0; j < col; j++){
            int start = 0, end = row -1;
            while(start < end){
                swap(matrix[start][j], matrix[end][j]);
                start++;
                end--;
            }
        }

        // printing
        cout<<"matrix after rotating 90 degree Anticlockwise..."<<endl;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) 
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
}
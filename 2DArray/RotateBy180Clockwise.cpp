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

        // change the rows
        for(int i = 0; i < row / 2; i++){
            for(int j = 0; j < col; j++)
                swap(matrix[i][j], matrix[row - 1 -i][j]);
        }

        // reverse the row
        for(int i = 0; i < row; i++){
            int start = 0, end = col - 1;
            while(start < end){
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
        
        cout<<"matrix after rotating the 180 degree.."<<endl;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) 
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
}
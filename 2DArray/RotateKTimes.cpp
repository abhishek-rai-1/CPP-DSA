#include <iostream>
#include <vector>
using namespace std;

void RotateBy90(vector<vector<int>>&matrix, int row, int col){
    // Transpose
    for(int i = 0; i < row; i++){
        for(int j = 0; j < i; j++)
            swap(matrix[i][j], matrix[j][i]);
    }

    // reverse row
    for(int i = 0; i < row; i++){
        int start = 0, end = col - 1;
        while(start < end){
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

int main(){
    int row, col, k;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of col : ";
    cin>>col;
    cout<<"Enter the value of k : ";
    cin>>k;

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

        cout<<"matrix after rotation " <<k <<" times..." <<endl;

        k %= 4;
        while(k){
            RotateBy90(matrix, row, col);
            k--;
        }

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) 
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }
    }
}
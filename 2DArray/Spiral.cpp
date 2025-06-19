#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of col : ";
    cin>>col;

    vector<vector<int>>matrix(row, vector<int>(col));

    cout<<"Enter the elements in an array : ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin>>matrix[i][j];
    }

    // printing spiral
    int top = 0, right = col -1, bottom = row -1, left = 0;

    while(left <= right && top <= bottom){

        // printing top row
        for(int i = left; i <= right; i++)
            cout<<matrix[top][i]<<" ";
        top++;

        // printing right col
        for(int i = top; i <= bottom; i++)
            cout<<matrix[i][right]<<" ";
        right--;

        // printing bottow row
        if(top <= bottom){
            for(int i = right; i >= left; i--)
                cout<<matrix[bottom][i]<<" ";
            bottom--;
        }

        // printing left col
        if(left <= right){
            for(int i = bottom; i >= top; i--)
                cout<<matrix[i][left]<<" ";
            left++;
        }
    } 
}
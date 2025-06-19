// search in increasing order of row-wise and col-wise

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int row, col, k;
    cout<<"Enter the size of row : ";
    cin>>row;
    cout<<"Enter the size of col : ";
    cin>>col;

    vector<vector<int>>matrix(row, vector<int>(col));

    cout<<"Enter the elements in 2D array as increasing order in row-wise and col-wise: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin>>matrix[i][j];
    }

    cout<<"Enter the value you want to find : ";
    cin>>k;

    int i = 0, j = col -1;
    while(i < row && j >= 0){
        if(k == matrix[i][j]){
            cout<< "element "<<k <<" is found at index: "<<i <<", "<<j <<endl;
            break;
        }
        else if(k < matrix[i][j])
            j--;
        else
            i++;
    }

    if(i >= row || j < 0)
        cout<<"element "<<k <<" is not found.."<<endl;
}
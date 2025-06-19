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

    cout<<"Enter the elements in 2D array in sorted order: ";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cin>>matrix[i][j];
    }

    cout<<"Enter the value you want to find : ";
    cin>>k;

    // search in sorted order

    /*
    int start, end, mid;
    bool found = false;

    for(int i = 0; i < row; i++){

        if(matrix[i][0] <= k && k <= matrix[i][col -1]){

            // binary search
            start = 0, end = col -1; 
            while(start <= end){
                mid = (start + end) / 2;
                if(matrix[i][mid] == k){
                    cout<<"element "<<k <<" is found at index: "<<i <<", "<<mid <<endl;
                    found = true;
                    break;
                }
                else if(matrix[i][mid] > k)
                    end = mid -1;
                else
                    start = mid + 1;
            }
        }
    }

    if(!found)
        cout<<"element "<<k <<" is not found"<<endl;
    
    */

    int start = 0, end = row*col -1, mid, row_index, col_index;
    while (start <= end)
    {
        mid = (start + end) / 2;
        row_index = mid / col;
        col_index = mid % col;
        if(matrix[row_index][col_index] == k){
            cout<<"element "<<k <<" is found at index: "<<row_index <<", "<<col_index <<endl;
            break;
        }
        else if(matrix[row_index][col_index] < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    if(start > end)
        cout<<"element "<<k <<" is not found" <<endl;
}

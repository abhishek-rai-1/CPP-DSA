#include <iostream>
using namespace std;

int BisophMovement(int a, int b){
    int count = 0;
    count += min(8 - a, 8 - b);
    count += min(8 - a, b - 1);
    count += min(a - 1, 8 - b);
    count += min(a - 1, b - 1);
    return count;
}

int main(){
    int a, b;
    cout<<"Enter the positions of Bisoph (row, col): ";
    cin>> a >>b;
    cout<<"The bisoph total moves are : "<< BisophMovement(a, b) <<endl;
}
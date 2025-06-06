#include <iostream>
using namespace std;

int main(){
    char alpha;
    cout<<"enter the character: ";
    cin>> alpha;

    cout<< char('A' + (alpha - 'a')) <<endl;
}
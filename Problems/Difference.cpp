#include <iostream>
#include <vector>
using namespace std;

int Difference (vector<int>v, int target){
    
    sort(v.begin(), v.end());

    int start = 0, end = 1;

    if(target < 0)
        target = target*-1;

    while (end < v.size())
    {
        if(v[start] - v[end] == target)
            return 1;
        else if(v[start] - v[end] < target)
            end++;
        else
            start++;
        if(start == end)
            end++;
    }
    return 0;
}

int main(){
    int n, target;

    cout<<"Enter the size of array : ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements in sorted order: ";
    for(int i = 0; i < v.size(); i++)
        cin>>v[i];

    cout<<"Enter the target : ";
    cin>>target;

    int ans = Difference(v, target);

    cout<<ans<<endl;
}
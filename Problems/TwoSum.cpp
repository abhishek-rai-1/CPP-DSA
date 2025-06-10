#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> v, int target){
    vector<int> ans;
    int start = 0, end = v.size() -1;
    while (start <= end)
    {
        if(v[start] + v[end] == target){
            ans.push_back(v[start]);
            ans.push_back(v[end]);
            break;
        }
        else if((target - v[start]) < v[end])
            end--;
        else
            start++;
    }
    return ans;
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

    vector<int>ans = TwoSum(v, target);

    for(auto it : ans)
        cout<<it <<" ";
    cout<<endl;
}
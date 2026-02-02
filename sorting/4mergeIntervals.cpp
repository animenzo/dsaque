#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> mergeIntervals(vector<vector<int>> &arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);

        }else{
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> arr = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    vector<vector<int>> ans = mergeIntervals(arr);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}
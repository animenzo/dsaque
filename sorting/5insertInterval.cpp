#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<vector<int>> mergeIntervals(vector<vector<int>> &arr){
    // sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
   
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(ans.empty() || arr[i][0]>ans.back()[1]){
            ans.push_back(arr[i]);

        }else{
            ans.back()[1] = max(ans.back()[1],arr[i][1]);
        }
    }


    return ans;
}

vector<vector<int>> insertInterval(vector<vector<int>> &intervals,vector<int> &newInterval){
    // arr.push_back(newInterval);
    // return mergeIntervals(arr);
     vector<vector<int>> ans;
        int n = intervals.size();
        int i=0;
        while(i<n && intervals[i][1]<newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=newInterval[1]){
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1],newInterval[1]);
            i++;
        }
        ans.push_back(newInterval);
        
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        
        return ans;
}

int main(){
    vector<vector<int>> arr = {{1, 3}, {4, 5}, {6, 7}, {8, 10}};
    vector<int> newInterval = {5,6};
    vector<vector<int>> ans = insertInterval(arr,newInterval);
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
}
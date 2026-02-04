#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int nonIntervals(vector<vector<int>> &arr){
    int count = 0;
    sort(arr.begin(),arr.end());
    int end = arr[0][1];
    for(int i=1;i<arr.size();i++){
       if(arr[i][0]<end){
        count++;
        end = min(end,arr[i][1]);
       }else{
        end = arr[i][1];
       }
    }
    return count;
}
int main(){
    vector<vector<int>> arr = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
    int ans = nonIntervals(arr);
  cout<<ans;
}
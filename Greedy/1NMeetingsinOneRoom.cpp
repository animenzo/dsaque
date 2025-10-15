//gfg question - N meetings in one room

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int maxMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        pair<int,int> p = make_pair(start[i],end[i]);
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
    int ansEnd = v[0].second;
    int count = 1;
    for(int i=1;i<n;i++){
        if(v[i].first > ansEnd){
            count++;
            ansEnd = v[i].second;
        }
    }
    return count;

    

        
}

int main(){
    vector<int> startTime = {1,3,0,5,8,5};
    vector<int> endTime = {2,4,6,7,9,9};
    cout<<maxMeetings(startTime,endTime);
    return 0;
}


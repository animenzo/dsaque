  
  #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
  bool cmp(pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
    return a.first.second < b.first.second;
}
    vector<int> maxMeetings(int N, vector<int> &S, vector<int> &F) {
        
    vector<pair<pair<int,int>,int>> v;
    for(int i=0;i<N;i++){
       
        v.push_back({{S[i],F[i]},i+1});
    }
    sort(v.begin(),v.end(),cmp);
    int ansF = v[0].first.second;
    int count = 1;
     
    vector<int> meetings;
    meetings.push_back(v[0].second);
    for(int i=1;i<N;i++){
         
        if(v[i].first.first > ansF){
            meetings.push_back(v[i].second);
            count++;
            ansF = v[i].first.second;
            
        }
    }
    sort(meetings.begin(),meetings.end());
    return meetings;

    }

    
int main(){
    vector<int> startTime = {1,3,0,5,8,5};
    vector<int> endTime = {2,4,6,7,9,9};
    vector<int> all = maxMeetings(6,startTime,endTime);
    for(int i=0;i<all.size();i++){
        cout<<all[i]<<" ";
    }
    return 0;
}

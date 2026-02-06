#include<iostream>
#include<vector>

using namespace std;

bool myComp(int &a,int &b){
    return a>b;
}

int hindex(vector<int>& citations){
    sort(citations.begin(),citations.end(),greater<int>());
    int i=0;
    while(i<citations.size() && citations[i] >i)
    {
       i++;
    }
    return i;
}

int main(){
    vector<int> arr = {3,0,5,3,0};
    int n = arr.size();
    
   int h = hindex(arr);
    cout<<h;
}
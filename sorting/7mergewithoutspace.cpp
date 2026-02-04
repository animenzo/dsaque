#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        int i=n-1;
        int j=0;
        while(i>=0 && j<m){
            if(a[i]>b[j]){
                swap(a[i],b[j]);
                i--;
                j++;
            }
           else{
             i--;
            j++;
           }
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
    }

int main(){
    vector<int> a = {1, 5, 9, 10, 15, 20};
    vector<int> b = {2, 3, 8, 13};
    mergeArrays(a,b);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }


}
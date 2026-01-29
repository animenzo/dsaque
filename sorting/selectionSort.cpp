#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    for(int i=0;i<n;i++){
    int idxwithsmallele = i;
    for(int j=i;j<n;j++){
        if(arr[j] < arr[idxwithsmallele]){
            idxwithsmallele  =j;
        }
    }
    swap(arr[i],arr[idxwithsmallele]);
       
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
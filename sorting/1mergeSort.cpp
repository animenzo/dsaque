#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr,int s,int e){
    vector<int> temp;
    int mid = (s+e)/2;
    int left = s;
    int right = mid+1;
    while(left<=mid && right<=e){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
        }
    }

    while(left<=mid){
        temp.push_back(arr[left++]);
    }
    while(right<=e){
        temp.push_back(arr[right++]);
    }

    for(int i=s;i<=e;i++){
        arr[i] = temp[i-s];
    }
}
void mergeSort(vector<int> &arr,int s,int e){

    if(s>=e) return;//base case
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}


int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    
   mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
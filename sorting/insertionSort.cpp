#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    for(int i=1;i<n;i++){
        int j = i-1;
        int curElem = arr[i];
        while(j>=0 && arr[j] > curElem){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curElem;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
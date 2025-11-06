#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<climits>

int secondLargest(vector<int> &arr){
    int largest = arr[0];
    int secondLargest = INT_MIN;
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
            
        }else if(arr[i]<largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    vector<int> arr = {1,4,2,3};
    int secondL = secondLargest(arr);
    cout<<secondL;
}
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<climits>

//brute force
void rotArr(vector<int> &arr,int rot){
    int n = arr.size();
    for(int i=0;i<rot;i++){
        int first = arr[0];
        for(int j=0;j<n;j++){
            arr[j] = arr[j+1];
        }
        arr[n-1] = first; 
    }
    
}
//optimised


int main(){
    vector<int> arr = {1,4,0,2};
    int d = 2;
    rotArr(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
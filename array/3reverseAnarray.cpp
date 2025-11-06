#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<climits>

void revArr(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<arr.size()/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
}
int main(){
      vector<int> arr = {1,4,0,2};
    revArr(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
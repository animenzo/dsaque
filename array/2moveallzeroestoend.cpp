#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<climits>

void moveZeroes(vector<int> &arr){
    int count  = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
      vector<int> arr = {1,4,0,2,0,3,0};
    moveZeroes(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
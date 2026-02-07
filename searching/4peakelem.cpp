#include<iostream>
#include<vector>
using namespace std;

 int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s= 1;
        int e = nums.size() -2;
        if(n==1) return 0;
        //first elem is peak
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        
        
        while(s<=e){
            
            int mid = s+(e-s)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid -1] ){
                return mid;
            }
            
            if(nums[mid]<nums[mid+1]) s = mid +1;
            else e = mid -1;
        }
        
    }

int main(){
    vector<int> arr = {1,2,3,1};
    int peak = findPeakElement(arr);
    cout<<peak;
}
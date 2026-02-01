#include<iostream>
#include<vector>

using namespace std;


 void merge(vector<int> &arr,int s,int e,int &count){
        vector<int> temp;
        int mid = s + (e-s)/2;
        int left = s;
        int right = mid+1;
        while(left<=mid && right<=e){
            if(arr[left] <=arr[right]){
                
                temp.push_back(arr[left++]);
            }else{
                count+=(mid - left +1);//key line
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
    
    void mergeSort(vector<int> &arr,int s,int e,int &count){
        if(s>=e) return;
        int mid = s +(e-s)/2;
        mergeSort(arr,s,mid,count);
        mergeSort(arr,mid+1,e,count);
        merge(arr,s,e,count);
        
    }
    // int inversionCount(vector<int> &arr) {
    //     // Code Here
    //     int count = 0;
    //      int s = 0,e = arr.size() -1;
        
    //     mergeSort(arr,s,e,count);
    //     return count;
        
        
    // }

int main(){
    vector<int> arr = {2, 4, 1, 3, 5};
    int n = arr.size();
    int count = 0;
   mergeSort(arr,0,n-1,count);
    cout<<count+1;
}
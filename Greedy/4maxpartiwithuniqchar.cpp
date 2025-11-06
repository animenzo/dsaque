// gfg - maximize partitions with unique characters
  #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxPartitions(string &s) {
        // code here
        vector<int> lastIndexes(26,-1);
       
        for(int i=0;i<s.size();i++){
           lastIndexes[s[i]- 'a']  = i;
        }
         int count = 0;
        int curr = -1;
        
        for(int i=0;i<s.size();i++){
            curr = max(curr,lastIndexes[s[i]- 'a']);
            if(curr == i){
                count++;
                curr=-1;
            }
        }
        return count;
    }
int main(){
    string s = "ababcbacadefegdehijhklij";
    int count = maxPartitions(s);
    cout<<count;

}
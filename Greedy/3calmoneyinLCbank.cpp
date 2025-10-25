//   leetcode - 1716
  #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 int totalMoney(int n) {
        int mondayMoney = 1;
       
        int result = 0;
        while(n>0){
            int money = mondayMoney;
            for(int i=1;i<=min(n,7);i++){
                result+=money;
                money++;
            }
            n=n-7;
            mondayMoney++;
        }
        return result;
    }

int main()
{
    int n = 10;
    int total = totalMoney(n);
    cout<<total;
}
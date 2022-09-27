#include<iostream>
#include<vector>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0, max = 0, cnt = 0;
        while(j<nums.size()){
            if(nums[j]==0){
                cnt++;
            }
            if(cnt<=k){
                if(j-i+1>max){
                    max  = j-i+1;
                }
            }
            else{
                while(cnt>k){
                    if(nums[i]==0){
                        cnt--;
                    }
                    i++;
                }
            }
            j++;
        }
        return max;
    }

int main()
{
    
    return 0;
}
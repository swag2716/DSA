#include<iostream>
#include<vector>
#include<deque>
using namespace std;


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0, j = 0, n = nums.size();
        deque<int>q;
        vector<int>ans;
        while(j<n){
            if(q.empty()){
                q.push_back(nums[j]);
            }
            else{
                if(nums[j]>q.back()){
                    while(!q.empty()){
                        if(nums[j]>q.back()){
                            q.pop_back();
                        }
                        else break;
                    }
                }
                q.push_back(nums[j]);
            }
            if(j-i+1==k){
                ans.push_back(q.front());
                if(nums[i] == q.front()){
                    q.pop_front();
                }
                i++;
            }
            j++;
        }
        return ans;
    }

int main(){
    return 0;
}
#include<iostream>
#include<map>
using namespace std;

int lengthOfLongestSubstring(string s) {
        map<char, int>mp;
        int i = 0, j = 0, n = s.size(), maxi = 0;
        while(j<n){
            mp[s[j]]++;
            if(mp[s[j]]>1){
                maxi = max(j-i, maxi);
                while(mp[s[j]]>1){
                    mp[s[i]]--;
                    i++;
                }
            }
            else{
                maxi = max(j-i+1, maxi);
            }
            j++;
        }
        return maxi;
    }

int main()
{   
    return 0;
}
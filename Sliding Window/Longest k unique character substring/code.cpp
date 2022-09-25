#include<iostream>
#include<map>
using namespace std;

int longestKSubstr(string s, int k) {
    // your code here
        map<char, int>mp;
        int i = 0, j = 0, n = s.size(), maxi = -1;
        while(j<n){
            mp[s[j]]++;
            if((mp.size())==k){
                if((j-i+1)>maxi){
                    maxi = j-i+1;
                }
            }
            else if((mp.size())>k){
                while((mp.size())>k){
                    mp[s[i]]--;
                    if(mp[s[i]]==0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            
            }
            j++;
        }
        return maxi;
        
    }

int main()
{
    
    return 0;
}
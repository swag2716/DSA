#include<iostream>
#include<map>
using namespace std;

string minWindow(string s, string t) {
        int i = 0, j = 0, min = INT_MAX;
        map<char, int>mp;
        for(int i = 0;i<t.size();i++){
            mp[t[i]]++;
        }
        int cnt = mp.size();
        string ans = "";
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    cnt--;
                }
            }
            if(cnt==0){
                while(cnt==0){
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]>0){
                            cnt++;
                        }
                    }
                    i++;
                }
                if(j-i+2<min){
                    ans = s.substr(i-1, j-i+2);
                    min = j-i+2;
                }
            }
            j++;
        }
        return ans;
    }

int main()
{
    
    return 0;
}
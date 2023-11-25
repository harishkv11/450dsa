#include <bits/stdc++.h>
using namespace std;

// O(nlogn)
bool validShuffle(string s, string t, string target) {
    string temp = s+t;
    sort(temp.begin(), temp.end());
    sort(target.begin(), target.end());

    return target==temp;
}

// TC: O(n), SC: O(n)
bool validShuffleOptimise(string s, string t, string target) {
    vector<int> f(26,0);
    for(char x: s) f[x-'a']++;
    for(char x: t) f[x-'a']++;

    for(char x: target) {
        if(f[x-'a']==0) return false;
        f[x-'a']--;
    }
    return true;
}

int main() {
    string s,t,target;cin>>s>>t>>target;
    // cout<<(validShuffle(s,t, target) ? "Valid" : "Invalid")<<endl;
    cout<<(validShuffleOptimise(s,t, target) ? "Valid" : "Invalid")<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
    PROBLEM STATEMENT:
    Given a string S of smallcase, the task is to print all the duplicate characters 
    with their occurrences in the given string.
*/

int main() {
    string s;cin>>s;
    vector<int> f(26,0);

    for(char x: s) f[x-'a']++;

    for(int i=0;i<26;i++) {
        char c = i+'a';
        if(f[i]>1) cout<<c<<" : "<<f[i]<<endl;
    }

    return 0;
}
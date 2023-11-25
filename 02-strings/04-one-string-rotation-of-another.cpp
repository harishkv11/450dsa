#include <bits/stdc++.h>
using namespace std;

/*
    PROBLEM STATEMENT:
    Given a string s1 and a string s2, write a function to check whether s2 is a rotation of s1. 

    Examples: 
    Input: S1 = ABCD, S2 = CDAB
    Output: Strings are rotations of each other

    Input: S1 = ABCD, S2 = ACBD
    Output: Strings are not rotations of each other
*/

// O(N*N)
bool approachOneIsRotation(string s, string t) {
    if(s.length()!=t.length()) return false;

    queue<char> q1,q2;
    for(char x: s) q1.push(x);
    for(char x: t) q2.push(x);

    int k = t.size();
    while(k--) {
        char x = q2.front();
        q2.pop();
        q2.push(x);

        if(q1==q2) return true;
    }
    return false;
}

bool approachTwoIsRotation(string s, string t) {
    string temp = s+s;
    return temp.find(t)!=string::npos; // To check whether one string(t)is a substring of another(temp)
}

int main() {
    string s,t;cin>>s>>t;
    if(approachOneIsRotation(s,t)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    if(approachOneIsRotation(s,t)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}
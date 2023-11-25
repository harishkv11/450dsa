#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string t=s;
    reverse(t.begin(), t.end());
    return t==s;
}

int main() {
    string s;cin>>s;
    
    if(isPalindrome(s)) cout<<"Palindrome";
    else cout<<"Not a palindrome";

    return 0;
}
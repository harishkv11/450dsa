#include <bits/stdc++.h>
using namespace std;

/*
    PROBLEM STATEMENT : 
    Given an unsorted array arr[] of size N having both negative and positive integers. 
    The task is place all negative element at the end of array without changing the 
    order of positive element and negative element.
*/

int main() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    vector<int> pos, neg;
    for(int x: a) {
        if(x<0) neg.push_back(x);
        else pos.push_back(x);
    }

    int k=0;
    for(int i=0;i<neg.size();i++) a[k++] = neg[i];
    for(int i=0;i<pos.size();i++) a[k++] = pos[i];

    for(int x: a) cout<<x<<" ";
    
    return 0;
}
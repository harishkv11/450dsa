#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    int minimum = *min_element(a.begin(),a.end());
    int maximum = *max_element(a.begin(), a.end());

    cout<<"Maximum : "<<maximum<<". Minimum : "<<minimum<<endl;   
    return 0;
}
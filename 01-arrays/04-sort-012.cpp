#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;

    int i=0, j=0, k=n-1;
    while(j<=k) {
        if(a[j]==0) {
            swap(a[i], a[j]);
            i++;
            j++;
        } else if(a[j]==1) {
            j++;
        } else {
            swap(a[j], a[k]);
            k--;
        }
    }

    for(int x: a) cout<<x<<" ";
    return 0;
}
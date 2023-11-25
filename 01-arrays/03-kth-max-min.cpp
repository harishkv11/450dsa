#include <bits/stdc++.h>
using namespace std;

int kthMax(vector<int> a, int n, int k) {
    priority_queue<int, vector<int> , greater<int>> pq;
    for(int x: a) {
        if(pq.size() == k) {
            if(pq.top() < x) {
                pq.pop();
                pq.push(x);
            }
        } else pq.push(x);
    }
    return pq.top();
}

int kthMin(vector<int> a, int n, int k) {
    priority_queue<int> pq;
    for(int x: a) {
        if(pq.size() == k) {
            if(pq.top() > x) {
                pq.pop();
                pq.push(x);
            }
        } else pq.push(x);
    }
    return pq.top();
}

int main() {
    int n;cin>>n;
    vector<int> a(n);
    for(int &x: a) cin>>x;
    int k;cin>>k;

    int kthMaximum = kthMax(a, n, k);
    int kthMinimum = kthMin(a, n, k);
    cout<<"Kth Maximum : "<<kthMaximum<<endl;
    cout<<"Kth minimum : "<<kthMinimum<<endl;
    return 0;
}
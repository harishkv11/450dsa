#include <bits/stdc++.h>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>> a, int n, int m) {
    int top=0, right=m-1, bottom=n-1, left=0;
    vector<int> ans;

    int dir = 0; // 0-left to right, 1-top to bottom, 2-right to left, 3-bottom to top

    while(top<=bottom and left<=right) {
        if(dir==0) {
            for(int i=top;i<=right;i++) ans.push_back(a[top][i]);
            top++;
            dir=1;
        } else if(dir==1) {
            for(int i=top;i<=bottom;i++) ans.push_back(a[i][right]);
            right--;
            dir=2;
        } else if(dir==2) {
            for(int i=right;i>=left;i--) ans.push_back(a[bottom][i]);
            bottom--;
            dir=3;
        } else {
            for(int i=bottom;i>=top;i--) ans.push_back(a[i][left]);
            left++;
            dir=0;
        }
    }
    return ans;
}
int main() {
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }    

    vector<int> traversal = spiralTraversal(a, n, m);
    for(int x: traversal) cout<<x<<" ";
    cout<<endl;
    return 0;
}
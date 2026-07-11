#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> a(n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    vector<vector<int>> dp(n);
    for (int i=0; i<n; i++) {
        dp[i].resize(i+1);
    }
    dp[0][0] = a[0][0];
    for (int i=1; i<n; i++) {
        for (int j=0; j<=i; j++) {
            int best = 0;
            if (j-1>=0) best = max(best, dp[i-1][j-1]);
            if (j<i) best = max(best, dp[i-1][j]);
            dp[i][j] = best + a[i][j];
        }
    }
    int ans = dp[n-1][0];
    for (int j=1; j<n; j++) {
        ans = max(ans, dp[n-1][j]);
    }
    cout << ans;
    return 0;
}
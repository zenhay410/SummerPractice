#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    
    vector<bool> is_danger(n + 1, false);
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        is_danger[x] = true;
    }
    
    vector<long long> dp(n + 1, 0);
    vector<long long> prefix(n + 1, 0);
    
    dp[0] = 1;
    prefix[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        if (is_danger[i]) {
            dp[i] = 0;
        } else {
            dp[i] = prefix[i - 1];
            if (i - k - 1 >= 0) {
                dp[i] = (dp[i] - prefix[i - k - 1] + MOD) % MOD;
            }
        }
        prefix[i] = (prefix[i - 1] + dp[i]) % MOD;
    }
    
    cout << dp[n] << endl;
    return 0;
}
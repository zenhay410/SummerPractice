#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        int pairs = n / 2;
        int remaining = n % 2;
        
        int cost1 = pairs * b + remaining * a;
        int cost2 = n * a;
        
        if (cost1 < cost2) {
            cout << cost1 << endl;
        } else {
            cout << cost2 << endl;
        }
    }
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, t;
    cin >> s >> t;
    
    int n = s.length();
    
    if (s == t) {
        cout << 0 << endl;
        return 0;
    }
    
    string doubled = s + s;
    size_t pos = doubled.find(t, 1);
    
    if (pos == string::npos || pos >= (size_t)n) {
        cout << -1 << endl;
    } else {
        cout << n - pos << endl;
    }
    
    return 0;
}
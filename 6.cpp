#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int a[25];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int otvet = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int l = j + 1; l < n; l++) {
                int xor_sum = a[i] ^ a[j] ^ a[l];
                if (xor_sum > otvet) {
                    otvet = xor_sum;
                }
            }
        }
    }
    
    cout << otvet << endl;
    
    return 0;
}
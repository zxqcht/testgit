#include <iostream>
using namespace std;

const int MOD = 20180520;

// 快速幂算法求幂次方
int qpow(int a, int b, int p) {
    int res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (long long)res * a % p;
        }
        a = (long long)a * a % p;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    // 计算 2^(2n) % MOD
    int ans = qpow(2, n, MOD);

    cout << ans << endl;

    return 0;
}


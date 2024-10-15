#include <fstream>
#include <iostream>
using ll = long long;
using namespace std;

const ll maxn = 1e3 + 1, mod = 1e9 + 7;
ll fac[maxn];

int main() {
    fac[0] = 1;
    ifstream fin("./1k_test.txt");
    ofstream fout("./1k_test_output.txt");
    int n, t = 0;
    while (fin >> n) {
        if (t <= n)
            fout << fac[n] << "\n";
        else {
            t = n;
            for (int i = t + 1; i <= n; i++) fac[i] = (fac[i - 1] * i) % mod;
            fout << fac[n] << "\n";
        }
    }
}
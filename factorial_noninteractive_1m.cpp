#include <fstream>
#include <iostream>
using ll = long long;
using namespace std;

const ll maxn = 1e6 + 1, mod = 1e9 + 7;
ll fac[maxn];

int main() {
    fac[0] = 1;
    for (int i = 2; i < maxn; i++) fac[i] = (fac[i - 1] * i) % mod;
    ifstream fin("./1k_test.txt");
    ofstream fout("./1k_test_output.txt");
    int n;
    while (fin >> n) {
        fout << fac[n] << "\n";
    }
}
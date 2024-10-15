#include <fstream>
#include <iostream>
using ll = long long;
using namespace std;

const ll maxn = 1e6 + 1, mod = 1e9 + 7;
ll fib[maxn];

int main() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < maxn; i++) fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
    ifstream fin("./1k_test.txt");
    ofstream fout("./1k_test_output.txt");
    int n;
    while (fin >> n) {
        fout << fib[n] << "\n";
    }
}
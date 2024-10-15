#include <fstream>
#include <iostream>
using ll = long long;
using namespace std;

const ll maxn = 1e6 + 1, mod = 1e9 + 7;
ll fib[maxn];

int main() {
    fib[0] = 0;
    fib[1] = 1;
    ifstream fin("./1k_test.txt");
    ofstream fout("./1k_test_output.txt");
    int n, t = 0;
    while (fin >> n) {
        if (t <= n)
            fout << fib[n] << "\n";
        else {
            t = n;
            for (int i = t + 1; i <= n; i++)
                fib[i] = (fib[i - 1] + fib[i - 2]) % mod;
            fout << fib[n] << "\n";
        }
    }
}
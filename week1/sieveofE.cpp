#include <bits/stdc++.h>

using namespace std;

vector<int> sieve(int n) {
    vector<bool> prime(n+1, true);
    for(int p=2;p*p<=n;p++) {
        if(prime[p] == true)
    }
}

int main() {
    int n;
    cout << "enter a value for n: ";
    cin >> n;
    vector<int> res = sieve(n);
    return 0;
}
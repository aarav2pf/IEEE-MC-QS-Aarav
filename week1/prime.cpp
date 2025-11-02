#include <bits/stdc++.h>

using namespace std;

bool checkPrimeRecursive(int n, int i=2) {
    if (n<=1) return false;
    if (i*i > n) return true;
    if (n%i==0) return false;
    return checkPrimeRecursive(n, i+1);
} //time complexity is O of root n for both iterative and recursive approaches
//but the space complexity for recursive is O of root n but for iterative its O of 1 so thats more efficient

bool checkPrimeIterative(int n) {
    if (n<=1) return false;
    for(int i=2;i<n;i++) {
        if (n%i==0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "enter a number to check for prime: " << endl;
    cin >> n;
    bool flag1 = checkPrimeRecursive(n);
    if (flag1==true) cout << n << " is prime (checked recursively)" << endl;
    else cout << n << " is not prime (checked recursively)" << endl;
    bool flag2 = checkPrimeIterative(n);
    if (flag2==true) cout << n << " is prime (checked iteratively)" << endl;
    else cout << n << " is not prime (checked iteratively)" << endl;   
    return 0;
}
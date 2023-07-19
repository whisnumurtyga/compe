#include <iostream>
#include <map>
#include <math.h>
#define mod 1000000007

using namespace std;
map<long long, long long>dp;

long long f(long long x) {
    long long temp = x/2;
    if(x==0) return 1;
    if(x==1) return 1;
    if(x==2) return 2;
    if(dp[x] != 0) return dp[x];
    if(x%2 == 0)     {
        dp[x] = ((f(temp)*f(temp)) + (f(temp-1)*f(temp-1))) % mod;
    } else {
        dp[x] = ((f(temp)*f(temp+1)) + (f(temp-1)*f(temp))) % mod;
    }
    return dp[x];
}


int main() {
    long long n, jaw;
    dp[1] = 1;
    dp[2] = 2;
    cin >> n;
    jaw = f(n)%mod;
    jaw *= jaw;
    jaw %= mod;
    cout << jaw << endl;
}
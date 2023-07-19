// Refferensi Bedah : https://chat.openai.com/share/a4b02eff-7e3d-4346-baac-f07263f57dc2

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

ll sq(ll a) { return a*a;}

ll readInt() {
    ll ans = 0, sign = 1;
    char c;
    while(1) {
        c = getchar_unlocked();
        if (c == '-') { sign = -1; continue; }
        if((c >= '0') && (c <= '9')) break;
    } 
    do {
        ans = ans * 10 + c - '0';
        c = getchar_unlocked();
    } while ((c >= '0') && (c <= '9'));
    return ans * sign;
}

void writeInt(ll n) {
    if(n < 0) {
        putchar_unlocked('-');
        n *= -1;
    }

    if(n == 0) {
        putchar_unlocked('0');
        putchar_unlocked('\n');
        return;
    }

    char buf[10];
    int i = 9;
    while(n) {
        buf[i--] = n % 10 + '0';
        n /= 10;
    }

    while(i != 9) putchar_unlocked(buf[++i]);
    putchar_unlocked('\n');
}

int main()
{
    ll x0 = readInt(), y0 = readInt();
    int n = readInt();

    vector<ll> radii(n);

    for (auto &r: radii) {
        ll dx = readInt() - x0, dy = readInt() - y0;
        r = sq(dx) + sq(dy);
    }

    sort(radii.begin(), radii.end());
    int m = readInt();

    while(m--)
    {
        ll r = sq(readInt());
        auto iter = upper_bound(radii.begin(), radii.end(), r);
        writeInt(iter - radii.begin());
    }
    return 0;

}
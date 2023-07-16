#include <iostream>
#include <sstream>
#include <string>
// #include <boost/multiprecision/cpp_int.hpp>
#include <cmath>
// namespace mp = boost::multiprecision;



using namespace std;

// string longDoubleToString(const long double& num) {
//     mp::cpp_int numHighPrecision = static_cast<mp::cpp_int>(num);
//     return numHighPrecision.str();
// }

// long long fungsix(long double n) {
//     long long x = 1000000007;
//     if(n == 0) {
//         return 1;
//     } 
//     if(n == -1) {
//         return 0;

//     }
//     long long c = fungsix(n-1) + fungsix(n-2);

//     if(c > x) {
//         c = c % x;
//     }

//     return c;
// }

long long hitung(long long n, const long long fibo[]) {
    long long x = 1000000007;
    long long res;
    if(n < 50) {
        return fibo[n];
    }
    if(n % 2 == 0) {
        res = hitung(n/2, fibo) * hitung(n/2, fibo) + hitung((n/2)-1, fibo) * hitung((n/2)-1, fibo);
        if(res > x) {
            res = res % x;
        }
        return res;
    } else {
        res = hitung(n/2, fibo) * hitung((n/2)+1, fibo) + hitung((n/2), fibo) * hitung((n/2)-1, fibo);
        if(res > x) {
            res = res % x;
        }
        return res;
    }

    
}

int main()
{
    long double n;
    long long a = 0, b = 1, c = 0;
    long long x = 1000000007;
    long long result;
    long long fibo[51];

    cin >> n;

    for(long long i = 0; i < 10; i++) {
        c = a + b;
        fibo[i+1] = c; 
        if(c > x) {
            c = c % x;
        }
        a = b;
        b = c;
    }

    // cout << (c*c)%x;
    result = hitung(n, fibo);
    cout << (result*result)%x;
    // long long res = fungsix(n);
    // cout << (res * res) % x;
    // long double kurangi = bagi * 7;
    // string DigitString = longDoubleToString(c*c);
    // long double num = stold(nineDigitString);

    // cout << c << " " << c*c << " " << endl;
    // cout << bagi << " " << (bagi * 1000000000) << endl;
    // cout << nineDigitString << " " << num << endl;
    // // cout << DigitString << " " << DigitString.length();
    // long double bagi = 0;
    // long double csqr = c*c;
    // cout << csqr << endl;
    // for(int i = 0; i < 20; i++) {
    //     bagi = floor(csqr / 1000000);
    //     csqr = csqr - (bagi * 1000000);
    //     cout << csqr << " " << bagi << endl;
    // }

}

// Todo TASK - PECAHAN
    // Membandingkan hasil pembagian antara bilangan 1 dan bilangan 2 dengan bilangan 3 dan bilangan 4


#include <iostream>
using namespace std;


int main()
{
    // Optimal dasar
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c, d, res;

    cin >> a >> b >> c >> d;

    res = (a*d) - (b*c); // bentuk lain 

    if (res == 0) cout << "sama" << endl;
    else if (res > 0) cout << "lebih besar" << endl;
    else cout << "lebih kecil" << endl; 
}
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    long long a, b, c, d;

    cin >> a >> b;
    cin >> c >> d;

    if((a*d) == (c*b)) {
        cout << "sama" << endl;
        // cout << "a*d: " << a*d << "c*b: " << c*b << endl;
    } else if ((a*d) < (c*b) ) {
        cout << "lebih kecil" << endl;
        // cout << "a*d: " << a*d << "c*b: " << c*b << endl;
    } else {
        cout << "lebih besar" << endl;
        // cout << "a*d: " << a*d << "c*b: " << c*b ;
    }

}
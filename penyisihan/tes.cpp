#include <iostream>
using namespace std;


int main()
{
    float a, b;
    int c = 10;

    a = 10;
    b = 10.0;

    cout << (a==b) << endl;
    cout << (a==c) << endl;
    cout << (b==c) << endl;
    if(int(b) == c) {
        cout << "podo" << endl;
    }
}
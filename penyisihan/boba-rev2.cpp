#include <iostream>

using namespace std;


int main()
{
    float a = -1, b = -1, c = -1, n, temp;
    int index_a, index_b, index_c, stop = 0;
    float avg;

    cin >> n;
    // array1[n];
    // array2[n];

    for(int i = 1; i < n+1; i++) {
        cin >> temp;

        if(a != -1 && b != -1 && c != -1) {
            if(temp != b) {
                cout << "TIDAK SESUAI" << endl;
                stop = 1;
                break;
            }
        }

        if(temp != a && temp != b && temp != c) {
            if(a == -1) {
                a = temp;
                index_a = i;
            } else {
                if(temp > a) {
                    if(b == -1) {
                        b = temp;
                        index_b = i;
                    }else {
                        if(c == -1) {
                            if(temp < b) {
                                c = b;
                                b = temp;
                                index_c = index_b;
                                index_b = i;
                            } else {
                                c = temp;
                                index_c = i;
                            }
                        }else {
                            cout << "TIDAK SESUAI" << endl;
                            stop = 1;
                            break;
                        }
                    }
                } else if (temp < a) {
                    if(b == -1) {
                        b = a;
                        a = temp;
                        index_b = index_a;
                        index_a = i;
                    }else {
                        if(c == -1) {
                            c = b;
                            b = a;
                            a = temp;
                            index_c = index_b;
                            index_b = index_a;
                            index_a = i;
                        }else {
                            cout << "TIDAK SESUAI" << endl;
                            stop = 1;
                            break;
                        }
                    }
                }
            }
        }
    }

    // cout << a << " " << b << " " << c << endl;
    if(stop != 1) {
        if(b == -1 ) {
            cout << "SESUAI" << endl;
        } else {
            if(c == -1) {
                int rata_rata = int(b+a)/2;
                if(n == 2 && (b+a)/2 == rata_rata) {
                    cout << (b-a)/2 << " " << index_b << " " << index_a;
                }else {
                    cout << "TIDAK SESUAI" << endl;
                }
            } else {
                if(((c+a)/2) == b) {
                    cout << (c-a)/2 << " " << index_c << " " << index_a;
                } else {
                    cout << "TIDAK SESUAI" << endl;
                }
            }
        }
    }

}
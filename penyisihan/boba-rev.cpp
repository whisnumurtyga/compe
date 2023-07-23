#include <iostream>
#include <vector>

using namespace std;

bool containsDigit(const vector<int>& numbers, int digit) {
    for (int number : numbers) {
        int temp = number;
        while (temp != 0) {
            int lastDigit = temp % 10;
            if (lastDigit == digit) {
                return true;
            }
            temp /= 10;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    if(n == 1) {
        cout << "SESUAI";
    } 

    int v[n], sum = 0; 
    int rata_rata = 0;
    float avg = 0;

    vector<int> uniqueArr;
    vector<int> array2;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];

        if(containsDigit(uniqueArr, v[i])) {
            if(containsDigit(array2, v[i])) {
                continue;
            } else {
                array2.push_back(v[i]);
            }
            continue;
        } else {
            uniqueArr.push_back(v[i]);
        }

        if(uniqueArr.size() == 1) {
            cout << "SESUAI" << endl;
        } else if(uniqueArr.size() == 2) {
            avg = sum/n;
            rata_rata = int(avg);
            if(n == 2 && rata_rata == avg) {
                cout << "NUANG" << endl;
            } else {
                cout << "TIDAK SESUAI" << endl;
                break;
            }
        } else if (uniqueArr.size() == 3) {
            avg = sum/n;
            rata_rata = int(avg);
            if(rata_rata != avg) {
                cout << "TIDAK SESUAI" << endl;
            } else {
                if(containsDigit(uniqueArr, rata_rata)) {
                    if(array2.size() == 1) {
                        cout << "NUANG" << endl;
                    } else {
                        cout << "TIDAK SESUAI" << endl;
                    }
                } else {
                    cout << "TIDAK SESUAI" << endl;
                }
            }
        }  else {
            cout << "TIDAK SESUAI" << endl;
        }
    }

    // for(int i = 0; i < uniqueArr.size(); i++) {
    //     // cout << v[i];
    //     cout << uniqueArr[i];
    // }

    // cout << (5 == 5.1);
}
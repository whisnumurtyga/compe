#include <iostream>
using namespace std;


int main()
{
    int n;
    string s1, s2;

    cin >> n;
    int result[n];

    cin >> s1;
    cin >> s2;

    for(int i = 0; i < n; i++) {
        if(s1[i] == s2[i]) {
            result[i] = 2;
        } else if (s1[i] < s2[i]) {
            result[i] = 1;
        } else {
            result[i] = 0;
        }
    }
    
    int count = 0;
    for(int i = 0; i < (n-1); i++) {
        if (result[i] == 2) {
            
        }
        else if(result[i] != result[i+1]) {
            count++;
        } 
    }
}

for(int i = 0; i < n; i++) {
        if(s1[i] == s2[i]) {
            result[i] = 2;
        } else if (s1[i] < s2[i]) {
            result[i] = 1;
        } else {
            result[i] = 0;
        }
    }
    cout << "biner awal: " <<endl;
    for(int i = 0; i < n; i++) {
        cout << result[i];
    }
    cout << endl;


    int awal = 0 , akhir, count = 0;
    while(awal != -1) {
        count += 1;
        awal = -1;
        akhir = -1;

        for(int i = 0; i < n; i++) {
            if(result[i] == 0) {
                awal = i;
                break;
            }

            // if()
            // cout << result[i];
        }

        for(int i = n; i >= 0; i--) {
            if(result[i] == 0) {
                akhir = i;
                break;
            }
        }

        // pembalikan 1
        for(int i = awal; i <= akhir; i++) {
            if(result[i] == 0) {
                result[i] = 1;
            } else if(result[i] == 1) {
                result[i] = 0;
            } 
        }

        for(int i = 0; i < n; i++) {
            cout << result[i];
        }

        cout << endl;
    }

    cout << (count-1);

    

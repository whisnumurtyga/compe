#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n;

    string s1, s2;
    cin >> n;
    int result[n];

    cin >> s1;
    cin >> s2;

    int ik = 0;
    float count = 0;
    

    for(int i = 0; i < n; i++) {
        if (s1[i] < s2[i]) {
            result[ik] = 1;
            if((result[ik] != result[ik-1]) && (ik != 0)) {
                count++;
            }
            ik++;
        } else if(s1[i] > s2[i]) {
            result[ik] = 0;
            if((result[ik] != result[ik-1]) && (ik != 0)) {
                count++;
            }
            ik++;
        }
    }
    // todo IK
    // cout << ik << endl;;

    // todo PRINT RESULT
    // for(int i = 0; i < ik; i++) {
    //     cout << result[i];
    // }
    // cout << endl;

    // todo COUNT
    if(ik != 0) {
        count += 1;
    } 

    if(result[0] == 1) {
        count -= 1;        
    }

    if(result[ik] == 1) {
        count -= 1;
    }

    count += 1;
    count /= 2;

    cout << floor(count) << endl;














    
}
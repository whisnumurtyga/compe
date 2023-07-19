// Refferensi Bedah :: https://chat.openai.com/share/fb48b25d-2c68-4a05-909a-725c35dd1dfa

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Optimal dasar
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    string str1, str2;
    cin >> str1;
    cin >> str2;

    int flag = 0, count = 0;
    for(long long i; i < n; i++) {
        if(str1[i] > str2[i]) {
            if(flag == 0) {
                count++;
                flag = 1;
            }
        } else if (str1[i] < str2[i]) {
            flag = 0;
        }
    }

    cout << count << endl;
}
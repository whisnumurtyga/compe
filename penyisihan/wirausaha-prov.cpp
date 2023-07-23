#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Fungsi untuk mencari semua subset sum yang mendekati atau sama dengan target
void findClosestSubsetSum(const vector<int>& values, int target, vector<int>& closestSums) {
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int value : values) {
        for (int i = target; i >= value; --i) {
            if (dp[i - value]) {
                dp[i] = true;
            }
        }
    }

    for (int i = target; i >= 0; --i) {
        if (dp[i]) {
            closestSums.push_back(i);
        }
    }
}

int main() {
    int P, N, K;
    cin >> P >> N >> K;

    vector<string> provinces(P);
    vector<vector<int>> productPrices(P, vector<int>(N));

    for (int i = 0; i < P; ++i) {
        cin.ignore(); // Ignore the newline character after previous input
        getline(cin, provinces[i]);
        for (int j = 0; j < N; ++j) {
            cin >> productPrices[i][j];
        }
    }

    string selectedProvince;
    int closestDiff = K; // Inisialisasi selisih terdekat dengan K

    for (int i = 0; i < P; ++i) {
        vector<int> closestSums;
        findClosestSubsetSum(productPrices[i], K, closestSums);

        for (int sum : closestSums) {
            int currentDiff = abs(K - sum);

            if (currentDiff < closestDiff) {
                closestDiff = currentDiff;
                selectedProvince = provinces[i];
            } else if (currentDiff == closestDiff) {
                selectedProvince = min(selectedProvince, provinces[i]);
            }
        }
    }

    cout << selectedProvince;

    return 0;
}

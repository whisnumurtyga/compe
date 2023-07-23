#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void check_coffee_boba_volumes_greedy(int N, vector<int>& volumes) {
    int total_volume = 0;
    for (int volume : volumes) {
        total_volume += volume;
    }
    double avg_volume = static_cast<double>(total_volume) / N;

    if (all_of(volumes.begin(), volumes.end(), [avg_volume](int volume) { return volume == avg_volume; })) {
        cout << "SESUAI" << endl;
    } else {
        vector<pair<int, int>> volumes_diff;
        for (int i = 0; i < N; ++i) {
            volumes_diff.push_back(make_pair(i, volumes[i] - avg_volume));
        }
        sort(volumes_diff.begin(), volumes_diff.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        int flag = 0, src = 0, dest = 0;
        int pour_volume;

        for (int i = 0; i < N; ++i) {
            for (int j = i + 1; j < N; ++j) {
                if (volumes_diff[i].second > 0 && volumes_diff[j].second < 0) {
                    pour_volume = min(volumes_diff[i].second, -volumes_diff[j].second);
                    volumes_diff[i].second -= pour_volume;
                    volumes_diff[j].second += pour_volume;
                    flag++;

                    if (flag > 1) {
                        cout << "TIDAK SESUAI" << endl;
                        return;
                    }
                    // cout << pour_volume << " " << volumes_diff[i].first + 1 << " " << volumes_diff[j].first + 1 << endl;
                    src = volumes_diff[i].first + 1;
                    dest = volumes_diff[j].first + 1;
                }
            }
        }
        
        if(flag == 1) {
            cout << pour_volume << " " << src << " " << dest;
        }

        if (all_of(volumes_diff.begin(), volumes_diff.end(), [](const pair<int, int>& p) { return p.second == 0; })) {
            // cout << "SESUAI" << endl;
        } else {
            cout << "TIDAK SESUAI" << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<int> volumes(N);
    for (int i = 0; i < N; ++i) {
        cin >> volumes[i];
    }

    check_coffee_boba_volumes_greedy(N, volumes);

    return 0;
}

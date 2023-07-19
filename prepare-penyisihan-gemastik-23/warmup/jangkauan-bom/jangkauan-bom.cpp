#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;



int main()
{
    
    int xc, yc; // koordinat jatuh bom
    int nEnemies; // banyaknya karakter musuh

    int nBom; // banyaknya bom

    cin >> xc >> yc; 
    cin >> nEnemies;
    int Enemies[nEnemies][2]; // koordinat masing-masing karakter musuh
    double jarakEnemies[nEnemies];

    for(int i = 0; i < nEnemies; i++) {
        cin >> Enemies[i][0] >> Enemies[i][1];
        double dx = Enemies[i][0] - xc;
        double dy = Enemies[i][1] - yc;
        jarakEnemies[i] = sqrt((dx * dx) + (dy * dy));
    }

    // cout << jarakEnemies << " " << nEnemies << " " << (jarakEnemies+nEnemies);
    sort(jarakEnemies, jarakEnemies+nEnemies);

    // for (int i = 0; i < nEnemies; i++) {
    //     cout << jarakEnemies[i] << " ";
    // }
    // cout << endl;


    cin >> nBom;
    long long bom[nBom]; //radius setiap bom
 
    int hasil[nBom];


    for(int i = 0; i < nBom; i++) {
        cin >> bom[i];
    }

    for(int i = 0; i < nBom; i++) {
        int total = 0;

        int target = bom[i];

        // Menggunakan std::upper_bound untuk mencari iterator pertama yang lebih besar dari target
        auto upper = upper_bound(jarakEnemies, jarakEnemies + nEnemies, target);

        if (upper != jarakEnemies + nEnemies) {
            int firstIdx = upper - jarakEnemies; // Menghitung indeks dari iterator
            cout << firstIdx << endl;
        } else {
            cout << nEnemies << endl;
        }
    }    
}
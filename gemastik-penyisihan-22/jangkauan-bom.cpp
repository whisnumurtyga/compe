/*
    1. Koordinat Lokasi Jatuhnya Bom
    2. Banyaknya Karakter Musuh
    3. Koordinat masing-masing karakter musuh
    4. Banyaknya Jenis Bom
    5. Radius Setiap Bom
    
    Output: Banyaknya karakter musuh yang mati ketika menggunakan setiap jenis bom

    CONSTRAINT KOORDINAT
    -10^6 sampai 10^6
*/

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;



int main()
{
    // cout << "tes";
    
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
        // jarakEnemies[i] = (dx * dx) + (dy * dy);
    }

    // for(int i = 0; i < nEnemies-1; i++) {
    //     for(int j = (i+1); j < nEnemies; j++) {
    //         if(jarakEnemies[i] > jarakEnemies[j]) {
    //             double temp = jarakEnemies[i];
    //             jarakEnemies[i] = jarakEnemies[j];
    //             jarakEnemies[j] = temp;
    //         }
    //     }
    // }

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

        
              

        // for(int j = 0; j < nEnemies; j++) {

        //     if(jarakEnemies[j] > bom[i]) {
        //     // if(jarakEnemies[j] > (bom[i]*bom[i])) {
        //         total = j;
        //         break;
        //     }
            
        //     if(j == nEnemies-1) {
        //         total = nEnemies;
        //     }
        // }
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




    // for (int i = 0; i < nBom; i++) {
    //     cout << hasil[i] << endl;
    // }




    

}
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
    float jarakEnemies[nEnemies];

    for(int i = 0; i < nEnemies; i++) {
        cin >> Enemies[i][0] >> Enemies[i][1];
        double dx = Enemies[i][0] - xc;
        double dy = Enemies[i][1] - yc;
        jarakEnemies[i] = sqrt(dx * dx + dy * dy);
    }


    cin >> nBom;
    int bom[nBom]; //radius setiap bom

    for(int i = 0; i < nBom; i++) {
        cin >> bom[i];
    }

    for(int i = 0; i < nBom; i++) {
        int n = 0;
        for(int j = 0; j < nEnemies; j++) {
            if(jarakEnemies[j] <= bom[i]) {
                n++;
            }
        }
        cout << n << endl;
    }
    

}
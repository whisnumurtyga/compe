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
    int jarakEnemies[nEnemies];


    for(int i = 0; i < nEnemies; i++) {
        cin >> Enemies[i] >> Enemies[i];
    }

    cin >> nBom;
    int bom[nBom]; //radius setiap bom
    for(int i = 0; i < nBom; i++) {
        cin >> bom[i];
    }

    for(int i = 0; i < nBom; i++) {
        int n = 0;

    
        for(int j = 0; j < nEnemies; j++) {
            int xmax = xc + bom[i];
            int xmin = xc - bom[i];
            int ymax = yc + bom[i];
            int ymin = yc - bom[i];

            if(Enemies[j][0] > xmax  || Enemies[j][0] < xmin || Enemies[j][1] > ymax || Enemies[j][1] < ymin) {
                continue;
            }

            double dx = Enemies[j][0] - xc;
            double dy = Enemies[j][1] - yc;
            double distance = sqrt(dx * dx + dy * dy);

            if(distance <= bom[i]) {
                n++;
                // cout << "dis: " << distance << " (" << Enemies[j][0] << "," << Enemies[j][1] << ")" << endl;
            }
        }
        cout << n << endl;
    }
    

}
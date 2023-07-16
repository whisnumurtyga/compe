/*

Mr. Agoji sedang merencanakan liburan ke kota baru dan ingin mencari hotel dengan rating terbaik sesuai dengan anggaran yang dimilikinya. Dia memiliki daftar hotel beserta nama, harga per malam, dan rating. Terdapat juga beberapa rentang anggaran yang telah dipertimbangkan. Dia membutuhkan bantuanmu untuk menentukan hotel dengan rating terbaik untuk setiap rentang anggaran.

Input terdiri dari hal berikut:

Baris pertama berisi dua angka, N dan Q, yang mewakili jumlah hotel dan jumlah rentang anggaran.
N baris berikutnya berisi informasi tentang setiap hotel: nama hotel (sebuah string), harga per malam (sebuah angka bulat), dan rating (sebuah angka desimal).
Q baris selanjutnya menjelaskan rentang anggaran, masing-masing terdiri dari dua angka, L dan U, yang mewakili batas bawah dan batas atas suatu rentang.
Tugas Anda adalah mencari hotel dengan rating terbaik untuk setiap rentang anggaran. Jika terdapat beberapa hotel dengan rating yang sama, pilih yang memiliki harga per malam terendah. Outputkan nama hotel dengan rating terbaik untuk setiap rentang anggaran.

Sebagai contoh, pertimbangkan input berikut:
3 3
a 1000 8.1
b 800 7.6
c 1200 7.9
600 1400
700 900
300 12000

Dalam kasus ini, outputnya adalah:
a
b
a

Penjelasan:

Untuk rentang [600, 1400], hotel dengan rating terbaik adalah a.
Untuk rentang [700, 900], hotel dengan rating terbaik adalah b.
Untuk rentang [300, 12000], hotel dengan rating terbaik adalah a.


*/


#include <iostream>
#include <string>
#include <vector>

struct Hotel {
    std::string name;
    int price;
    double rating;
};

int main() {
    int N, Q;
    std::cin >> N >> Q;

    std::vector<Hotel> hotels(N);
    for (int i = 0; i < N; i++) {
        std::cin >> hotels[i].name >> hotels[i].price >> hotels[i].rating;
    }

    for (int i = 0; i < Q; i++) {
        int L, U;
        std::cin >> L >> U;

        std::string bestHotel = "";
        double bestRating = 0;
        int bestPrice = -1;

        for (const Hotel& hotel : hotels) {
            if (hotel.price >= L && hotel.price <= U) {
                if (hotel.rating > bestRating || (hotel.rating == bestRating && hotel.price < bestPrice)) {
                    bestHotel = hotel.name;
                    bestRating = hotel.rating;
                    bestPrice = hotel.price;
                }
            }
        }

        std::cout << bestHotel << std::endl;
    }

    return 0;
}

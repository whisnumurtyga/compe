// Program untuk memainkan permainan Nim dengan aturan khusus
// Referensi: https://www.scaler.com/topics/data-structures/nim-game/

#include <iostream>
using namespace std;

// Fungsi untuk menghitung nim-sum dari suatu bilangan
long long nim_sum(long long n) {
    switch (n % 4) {
    case 0: return n;          // Jika n % 4 = 0, nim-sum adalah n
    case 1: return 1;          // Jika n % 4 = 1, nim-sum adalah 1
    case 2: return n + 1;      // Jika n % 4 = 2, nim-sum adalah n + 1
    case 3: return 0;          // Jika n % 4 = 3, nim-sum adalah 0
    }
    return 0; // Baris ini tidak akan pernah tercapai, hanya untuk menghindari peringatan kompiler
}

int main() {
    long long N, K, M;
    cin >> N >> K >> M;

    if (M % 2 == 0) {
        cout << "Kedua" << endl;    // Jika M adalah bilangan genap, output "Kedua"
    }
    else {
        // Hitung nim-sum dari N-1 dan N-K-1
        long long nim_xor = nim_sum(N - 1) ^ nim_sum(N - K - 1);

        if (nim_xor == 0) {
            cout << "Kedua" << endl;    // Jika hasil XOR nim-sum adalah 0, output "Kedua"
        }
        else {
            cout << "Pertama" << endl;  // Jika hasil XOR nim-sum bukan 0, output "Pertama"
        }
    }

    return 0;
}

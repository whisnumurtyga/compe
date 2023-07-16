/*
    Link    : https://leetcode.com/problems/longest-consecutive-sequence/
    Note    : use bruteforce and try to optimize, consider the max subseq containing each num; add each num to hashset, for each num if num-1 doesn’t exist, count the consecutive nums after num, ie num+1; there is also a union-find solution;

    Problem : Longest Consecutive Sequence
    - Diberikan sebuah larik bilangan bulat yang tidak diurutkan, kembalikan panjang urutan elemen berurutan terpanjang.
    - Anda harus menulis algoritma yang berjalan dalam waktu O(n).

    Contoh 1 : 
        Input : nums = [100,4,200,1,3,2]
        Output : 4
        Penjelasan :  Urutan elemen berurutan terpanjang adalah [1, 2, 3, 4]. Oleh karena itu, panjangnya adalah 4.

    Contoh 2 :
        Input :  nums = [0,3,7,2,5,8,4,4,6,0,1]
        Output : 9

    Constraint :
        1. 0 <= nums.length <= 105
        2. -109 <= nums[i] <= nums[i]
*/


//  C O D E
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longestStreak = 0;
    
    for (int num : nums) {
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;
            
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }
            
            longestStreak = max(longestStreak, currentStreak);
        }
    }
    
    return longestStreak;
}

int main() {
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int result = longestConsecutive(nums);
    cout << result << endl;  // Output: 9
    
    return 0;
}


//  A L G O R I T M A   P E N Y E L E S A I A N
/*
    1. Buatlah sebuah set kosong yang akan digunakan untuk menyimpan elemen-elemen yang sudah dikunjungi dalam larik.
    2. Iterasi pertama:
        -   Lakukan iterasi pertama pada larik nums untuk memasukkan setiap elemen ke dalam set yang telah dibuat. 
            Hal ini  dilakukan untuk mempermudah pencarian elemen selanjutnya dengan kompleksitas waktu O(1).
    3. Iterasi kedua:
    Lakukan iterasi kedua pada larik nums dan lakukan langkah-langkah berikut:
        - Untuk setiap elemen num dalam larik:
            - Periksa apakah num - 1 ada dalam set. Jika tidak ada, artinya num adalah elemen awal dari suatu urutan berurutan.
            - Jika num - 1 tidak ada dalam set, maka num adalah elemen awal urutan berurutan. 
            Kita dapat mulai memeriksa berapa banyak elemen yang ada dalam set dengan nilai num, num + 1, num + 2, dan 
            seterusnya, selama elemen-elemen tersebut ada dalam set.
            - Kita dapat menggunakan pendekatan ini untuk menemukan panjang urutan berurutan yang dimulai dari 
            setiap elemen num.
            - Selama kita menemukan elemen berikutnya dalam urutan berurutan, kita akan terus meningkatkan jumlah urutan 
            (currentStreak) dan memperbarui nilai terpanjang (longestStreak) jika diperlukan.
    4. Kembalikan panjang urutan berurutan terpanjang yang telah ditemukan.

    Dengan algoritma ini, kita dapat menemukan panjang urutan berurutan terpanjang dalam larik nums dengan kompleksitas waktu
    O(n), di mana n adalah jumlah elemen dalam larik.
*/
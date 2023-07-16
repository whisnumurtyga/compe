/*
===>  BUYING APPLES  <===

    - Harish pergi ke sebuah supermarket untuk membeli tepat 'k' kilogram apel untuk 'n' temannya. 
    - Supermarket tersebut sangat aneh. Harga barang di sana sangat berbeda. Dia pergi ke bagian Apel dan menanyakan harga-harganya.
    - Penjual memberinya selembar kartu yang berisi daftar harga apel. 
    - Harga apel bukan per kilogram, tetapi apel dikemas dalam kantong-kantong, masing-masing berisi 'x' kilogram apel, dengan x > 0 dan 'x' merupakan bilangan bulat.
    - Satu kantong berisi 'x' kilogram apel dijual dengan harga 'y' rupiah.
    - Jadi, dalam kartu tersebut terdapat tabel dengan entri 'y' yang menunjukkan harga kantong berisi 'x' kilogram apel. 
    - Jika 'y' bernilai -1, itu berarti kantong tersebut tidak tersedia. 
    - Sekarang karena apel hanya tersedia dalam kantong-kantong, Harish memutuskan untuk membeli paling banyak 'n' kantong untuk teman-temannya, artinya ia tidak akan membeli lebih dari n kantong apel.
    - Harish sangat menyukai teman-temannya dan dia tidak ingin mengecewakan mereka. Jadi sekarang, dia akan memberitahu Anda berapa banyak temannya dan Anda harus memberitahunya jumlah minimum uang yang harus dia keluarkan untuk teman-temannya

==> Input
    - Baris pertama input akan berisi jumlah kasus uji, C.
    - Setiap kasus uji akan berisi dua baris.
    - Baris pertama berisi N dan K, jumlah teman yang dimiliki Harish dan jumlah apel dalam kilogram yang harus dia beli.
    - Baris kedua berisi K bilangan bulat yang dipisahkan oleh spasi, di mana bilangan bulat ke-i menunjukkan harga kantong apel berisi 'i' kilogram. Nilai -1 menunjukkan bahwa kantong tersebut tidak tersedia.

    0 < N <= 100
    0 < K <= 100
    0 < harga <= 1000

==> Output
    Output untuk setiap kasus uji adalah satu baris berisi jumlah minimum uang yang harus dia keluarkan untuk teman-     temannya. Cetak -1 jika tidak mungkin baginya untuk memenuhi teman-temannya.

==> Contoh I/0
    Input:
        2
        3 5
        -1 -1 4 5 -1
        5 5
        1 2 3 4 5

    Output:
        -1
        5

    Penjelasan dari kasus-kasus uji:
        - Karena di toko hanya terdapat kantong berisi 4 kilogram dan 5 kilogram, dia tidak akan dapat memenuhi teman-temannya karena dia tidak akan dapat membeli tepat 3 kilogram apel.
        -  Dia dapat membeli 5 kilogram. Jadi, jumlah uang minimum yang harus dia keluarkan adalah 5.
*/
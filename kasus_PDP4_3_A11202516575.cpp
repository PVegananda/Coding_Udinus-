#include <iostream> // menambah package/library untuk input dan output seperti cout dan cin
#include <iomanip>  // masih boleh disertakan jika nanti butuh formatting lainnya
#include <cmath>    // library matematika (tidak digunakan di program ini, bisa dihapus jika tidak perlu)
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() { // fungsi utama program
    int angka = 0; // deklarasi variabel angka dengan tipe int karena hanya memproses bilangan bulat dua digit

    cout << "----------PENUKAR BILANGAN 2 DIGIT---------" << endl; // judul program
    cout << "===========================================" << endl;
    cout << endl; // spasi agar tampilan rapi

    cout << "Masukkan angka 2 digit = "; // meminta input dari user
    cin >> angka; // menyimpan input ke variabel angka

    if (angka >= 10 && angka < 100) { // validasi bahwa input adalah angka 2 digit
        int puluhan = angka / 10; // mengambil digit puluhan (contoh: 42 / 10 = 4)
        int satuan = angka % 10;   // mengambil digit satuan (contoh: 42 % 10 = 2)
        int hasil = satuan * 10 + puluhan; // membalik digit (contoh: 2 * 10 + 4 = 24)

        cout << "Hasil penukaran: " << hasil << endl; // menampilkan hasil penukaran
    } else {
        cout << "Masukkan harus angka 2 digit!" << endl; // pesan error jika input bukan 2 digit
    }

    return 0; // menandakan program selesai dengan sukses
}

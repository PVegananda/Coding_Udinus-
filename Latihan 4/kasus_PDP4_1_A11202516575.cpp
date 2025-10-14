#include <iostream> // menambah library untuk input dan output seperti cout dan cin
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std; // agar tidak selalu menuliskan std di setiap perintah seperti std::cout

int main() { // fungsi utama / main yang akan dieksekusi C++
    int angka, konversi_positif = 0; // pendeklarasian variabel bertipe integer (bilangan bulat), konversi_positif diinisialisasi ke 0

    cout << "---------KONVERSI BILANGAN NEGATIF---------" << endl; // judul program
    cout << "===========================================" << endl; // garis pemisah judul
    cout << endl; // spasi/baris kosong untuk tampilan lebih rapi

    cout << "Masukkan angka negatif / positif = "; // teks agar user tahu apa yang perlu diinputkan
    cin >> angka; // membaca input dari user dan menyimpannya ke variabel angka

    if (angka < 0) { // kondisi jika angka yang dimasukkan bernilai negatif
        konversi_positif = angka * -1; // dikalikan -1 agar menjadi bilangan positif
    } else { // kondisi jika angka bernilai positif atau nol
        konversi_positif = angka; // jika sudah positif, langsung disimpan tanpa perubahan
    }

    cout << "Hasil Konversi Angka : " << konversi_positif << endl; // menampilkan hasil konversi angka yang sudah pasti positif

    return 0; // mengembalikan nilai 0 ke sistem operasi, menandakan program berhasil dijalankan tanpa error
}

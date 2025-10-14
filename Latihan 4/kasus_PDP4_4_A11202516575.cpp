#include <iostream> // menambah package/library untuk input dan output standar seperti cout dan cin
#include <iomanip> // library untuk mengatur format tampilan angka (seperti jumlah angka di belakang koma)
#include <cmath> // library matematika (tidak digunakan dalam program ini, tapi tidak masalah jika tetap disertakan)
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std; // agar tidak perlu menuliskan std:: setiap menggunakan cout, cin, dll.

int main() { // fungsi utama yang akan dijalankan pertama kali saat program dieksekusi
    double gaji_karyawan_perjam, jam_kerja, bonus_lembur, total_gaji = 0; // deklarasi semua variabel, keterangan di bawah
    // deklarasi variabel dengan tipe double (untuk bilangan pecahan/desimal):
    // - gaji_karyawan_perjam : menyimpan nilai gaji pokok per jam kerja
    // - jam_kerja : menyimpan jumlah jam kerja per minggu
    // - bonus_lembur : menyimpan bonus tambahan jika ada lembur (jam kerja > 40)
    // - total_gaji : menyimpan total gaji akhir (gaji pokok + bonus)

    // Menampilkan judul program ke layar
    cout << "--------UPAH BONUS LEMBUR KARYAWAN---------" << endl;
    cout << "===========================================" << endl;
    cout << endl; // spasi/baris kosong agar tampilan lebih rapi

    // Input data dari user
    cout << "Masukkan Gaji Karyawan (perjam) (rupiah) = "; // prompt agar user memasukkan gaji per jam
    cin >> gaji_karyawan_perjam; // membaca input dan menyimpannya ke variabel gaji_karyawan_perjam

    cout << "Masukkan jam kerja perminggu karyawan = "; // prompt agar user memasukkan jumlah jam kerja per minggu
    cin >> jam_kerja; // membaca input dan menyimpannya ke variabel jam_kerja

    // Mengecek apakah karyawan bekerja lebih dari 40 jam dalam seminggu
    if (jam_kerja > 40) {
        // Jika ya, maka ada bonus lembur sebesar 30% dari gaji per jam untuk setiap jam lembur
        bonus_lembur = (jam_kerja - 40) * (gaji_karyawan_perjam * 0.30);
        // (jam kerja lembur) × (30% dari gaji per jam)

        // Menampilkan hasil ke layar
        cout << "Gaji Karyawan perjam      : " << gaji_karyawan_perjam << endl;
        cout << "Jam Kerja Karyawan        : " << jam_kerja << endl;
        cout << "Bonus Lembur Karyawan     : " << bonus_lembur << endl;

        // Total gaji = seluruh jam kerja × gaji per jam + bonus lembur
        cout << "Total Gaji Karyawan       : " << (gaji_karyawan_perjam * jam_kerja) + bonus_lembur << endl;

    } else {
        // Jika tidak lembur (jam kerja ≤ 40), maka bonus lembur = 0
        bonus_lembur = 0;

        // Menampilkan data dan total gaji tanpa bonus lembur
        cout << "Gaji Karyawan perjam      : " << gaji_karyawan_perjam << endl;
        cout << "Jam Kerja Karyawan        : " << jam_kerja << endl;
        cout << "Bonus Lembur Karyawan     : " << bonus_lembur << endl;
        cout << "Total Gaji Karyawan       : " << (gaji_karyawan_perjam * jam_kerja) + bonus_lembur << endl;
    }

    return 0; // Mengembalikan nilai 0 ke sistem operasi menandakan program selesai tanpa error
}

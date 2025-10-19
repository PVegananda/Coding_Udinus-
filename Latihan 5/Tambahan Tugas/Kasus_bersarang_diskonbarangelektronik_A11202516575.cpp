#include <iostream> // menambah package
#include <iomanip> // library pembulatan
#include <sstream> // library untuk string
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std; // agar tidak selalu menuliskan std:: di setiap coding

int main() {

         // Deklarasi variabel
        string jenis_barang;     // Elektronik / Pakaian / Makanan
        string status_member;    // Ya / Tidak
        int jumlah_barang;       // jumlah barang yang dibeli
        string metode_bayar;     // Cash / Kredit
        double total_diskon = 0; // total diskon dalam persen

        cout << "----------------PENENTU DISKON BAGI MEMBER----------------" << endl; // judul
        cout << "==========================================================" << endl; // judul
        cout << "----------------------PASYAH VEGANANDA--------------------" << endl; // judul
        cout << endl;
        cout << endl;

        // Input dari user
        cout << "---------!! WAJIB INPUT DENGAN AWALAN KAPITAL !!---------" << endl; // agar user tidak lupa
        // Input dari user
        cout << "Masukkan Jenis Barang (Elektronik/Pakaian/Makanan) : ";
        getline(cin, jenis_barang);

        cout << "Apakah Member? (Ya/Tidak)                          : ";
        getline(cin, status_member);

        cout << "Masukkan Jumlah Barang                             : ";
        cin >> jumlah_barang;
        cin.ignore(); // membersihkan buffer agar rapi

        cout << "Metode Pembayaran (Cash/Kredit)                    : ";
        getline(cin, metode_bayar);

        // Logika penentuan diskon dengan penentuan kartu member, jumlah dan metode pembayaran
        // Saya tidak memasukkan apa yang tidak ada di tabel karena akan mendapat asumsi kosong / data karangan / tidak sesuai analisa
        // Saya hanya memasukkan data sesuai apa yang tertera di tabel

        // ================= Percabangan Jenis Barang =================
        if (jenis_barang == "Elektronik") {
            // ============== Percabangan Status Member ================
            if (status_member == "Ya") {
                // ============= Percabangan Jumlah Barang =============
                if (jumlah_barang > 10) {
                    // ========= Percabangan Metode Pembayaran =========
                    if (metode_bayar == "Cash") {
                        total_diskon = 15; // sesuai tabel
                    } else if (metode_bayar == "Kredit") {
                        total_diskon = 13; // 15 - 2% cash
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0; // diskon 0
                    }
                } else {
                    if (metode_bayar == "Cash") {
                        total_diskon = 12;
                    } else if (metode_bayar == "Kredit") {
                        total_diskon = 10;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                }
            }
            else if (status_member == "Tidak") {
                if (jumlah_barang > 10) {
                    if (metode_bayar == "Cash") {
                        total_diskon = 8;
                    } else if (metode_bayar == "Kredit") {
                        total_diskon = 6;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                } else {
                    // Non-member dan < 10 barang untuk elektronik tidak dapat diskon
                    if (metode_bayar == "Cash" || metode_bayar == "Kredit") {
                        total_diskon = 0;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                }
            }
            else {
                status_member = "tidak ada";
                total_diskon = 0;
            }
        }

        else if (jenis_barang == "Pakaian") {
            if (status_member == "Ya") {
                if (jumlah_barang > 10) {
                    if (metode_bayar == "Cash") {
                        total_diskon = 10;
                    } else if (metode_bayar == "Kredit") {
                        total_diskon = 8;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                } else {
                    if (metode_bayar == "Cash" || metode_bayar == "Kredit") {
                        total_diskon = 0;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                }
            }
            else if (status_member == "Tidak") {
                if (jumlah_barang > 10) {
                    if (metode_bayar == "Cash") {
                        total_diskon = 5;
                    } else if (metode_bayar == "Kredit") {
                        total_diskon = 3;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                } else {
                    if (metode_bayar == "Cash" || metode_bayar == "Kredit") {
                        total_diskon = 0;
                    } else {
                        metode_bayar = "tidak ada";
                        total_diskon = 0;
                    }
                }
            }
            else {
                status_member = "tidak ada";
                total_diskon = 0;
            }
        }

        else if (jenis_barang == "Makanan") {
            // Untuk makanan semua kondisi mendapatkan diskon 2% saja
            if (metode_bayar == "Cash" || metode_bayar == "Kredit") {
                total_diskon = 2;
            } else {
                metode_bayar = "tidak ada";
                total_diskon = 0;
            }
        }

        else {
            // Jika jenis barang tidak cocok
            jenis_barang = "tidak ada";
            status_member = "tidak ada";
            metode_bayar = "tidak ada";
            total_diskon = 0;
        }

        // ================= Output hasil =================
        cout << "\n=== HASIL PERHITUNGAN DISKON ===\n";
        cout << "Jenis Barang   : " << jenis_barang << endl;
        cout << "Status Member  : " << status_member << endl;
        cout << "Jumlah Barang  : " << jumlah_barang << endl;
        cout << "Metode Bayar   : " << metode_bayar << endl;
        cout << "Total Diskon   : " << total_diskon << " %" << endl;

        return 0;
}

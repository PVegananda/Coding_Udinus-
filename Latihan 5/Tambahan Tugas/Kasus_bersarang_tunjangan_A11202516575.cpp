#include <iostream> // menambah package
#include <iomanip> // library pembulatan
#include <sstream> // library untuk string
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std; // agar tidak selalu menuliskan std:: di setiap coding

int main() {

        // Deklarasi variabel
        string jabatan;            // Menyimpan jabatan pegawai (Manager/Staff/Operator)
        string status_pegawai;     // Menyimpan status pegawai (Tetap/Kontrak)
        string lama_kerja;         // Menyimpan lama kerja (<3 tahun / 3–5 tahun / >5 tahun / Semua)
        string nilai_kinerja;      // Menyimpan nilai kinerja (Baik/Cukup/Kurang)
        int tunjangan = 0;         // Menyimpan jumlah tunjangan
        int bonus = 0;             // Menyimpan jumlah bonus

        cout << "----------------GAJI DAN TUNJANGAN PEGAWAI----------------" << endl; // judul
        cout << "==========================================================" << endl; // judul
        cout << "----------------------PASYAH VEGANANDA--------------------" << endl; // judul
        cout << endl;
        cout << endl;

        // Input dari user
        cout << "---------!! WAJIB INPUT DENGAN AWALAN KAPITAL !!---------" << endl; // agar user tidak lupa
        cout << "Masukkan Jabatan (Manager/Staff/Operator)  : ";
        getline(cin, jabatan); // input string jabatan

        cout << "Masukkan Status Pegawai (Tetap/Kontrak)    : ";
        getline(cin, status_pegawai); // input status pegawai

        // Jika status pegawai kontrak, maka lama kerja otomatis menjadi "Semua"
        if (status_pegawai == "Kontrak") {
            lama_kerja = "Semua";
            cout << "(Lama kerja otomatis diatur menjadi 'Semua' karena status Kontrak)\n";
        } else if (status_pegawai == "Tetap") {
            cout << "Masukkan Lama Kerja (<3/3-5/>5)        : ";
            getline(cin, lama_kerja);
        } else {
            lama_kerja = "tidak ada";
        }
        //akhir dari check karyawan kontrak
        cout << "Masukkan Nilai Kinerja (Baik/Cukup/Kurang) : ";
        getline(cin, nilai_kinerja);

        // Logika penentuan tunjangan dan bonus sesuai tabel
        // Saya tidak memasukkan apa yang tidak ada di tabel karena akan mendapat asumsi kosong / data karangan / tidak sesuai analisa
        // Saya hanya memasukkan data sesuai apa yang tertera di tabel

        // ================== Percabangan Jabatan ==================
        if (jabatan == "Manager" || jabatan == "manager") {
            // ============== Percabangan Status ===================
            if (status_pegawai == "Tetap") {
                // ============ Percabangan Lama Kerja ==============
                if (lama_kerja == ">5") {
                    // ===== Percabangan Nilai Kinerja =====
                    if (nilai_kinerja == "Baik") {
                        tunjangan = 3000000;
                        bonus = 2000000;
                    } else if (nilai_kinerja == "Cukup") {
                        tunjangan = 2000000;
                        bonus = 1000000;
                    } else if (nilai_kinerja == "Kurang") {
                        tunjangan = 1000000;
                        bonus = 0;
                    } else {
                        nilai_kinerja = "tidak ada";
                        tunjangan = 0;
                        bonus = 0;
                    }
                }
                else if (lama_kerja == "3-5") {
                    if (nilai_kinerja == "Baik") {
                        tunjangan = 2000000;
                        bonus = 2000000;
                    } else if (nilai_kinerja == "Cukup") {
                        tunjangan = 2000000;
                        bonus = 1000000;
                    } else if (nilai_kinerja == "Kurang") {
                        tunjangan = 1000000;
                        bonus = 0;
                    } else {
                        nilai_kinerja = "tidak ada";
                        tunjangan = 0;
                        bonus = 0;
                    }
                }
                else if (lama_kerja == "<3") {
                    // misalnya jika lama kerja < 3 tahun
                    if (nilai_kinerja == "Baik" || nilai_kinerja == "Cukup" || nilai_kinerja == "Kurang") {
                        tunjangan = 1000000;
                        bonus = 0;
                    } else {
                        nilai_kinerja = "tidak ada";
                        tunjangan = 0;
                        bonus = 0;
                    }
                }
                else {
                    lama_kerja = "tidak ada";
                    tunjangan = 0;
                    bonus = 0;
                }
            }
            else if (status_pegawai == "Kontrak" ) {
                // Kontrak = lama kerja otomatis "Semua"
                if (nilai_kinerja == "Kurang") {
                    tunjangan = 1000000;
                    bonus = 0;
                } else if (nilai_kinerja == "Baik" || nilai_kinerja == "Cukup") {
                    // jika nilainya tidak sesuai tabel maka dianggap tidak valid
                    tunjangan = 0;
                    bonus = 0;
                } else {
                    nilai_kinerja = "tidak ada";
                    tunjangan = 0;
                    bonus = 0;
                }
            }
            else {
                status_pegawai = "tidak ada";
                tunjangan = 0;
                bonus = 0;
            }
        }

        else if (jabatan == "Staf" || jabatan == "Staff" || jabatan == "staff") {
            if (status_pegawai == "Tetap") {
                if (lama_kerja == ">5") {
                    if (nilai_kinerja == "Baik") {
                        tunjangan = 2000000;
                        bonus = 1500000;
                    } else {
                        nilai_kinerja = "tidak ada";
                        tunjangan = 0;
                        bonus = 0;
                    }
                } else {
                    lama_kerja = "tidak ada";
                    tunjangan = 0;
                    bonus = 0;
                }
            }
            else if (status_pegawai == "Kontrak") {
                // lama kerja otomatis "Semua"
                if (nilai_kinerja == "Baik") {
                    tunjangan = 1000000;
                    bonus = 500000;
                } else {
                    nilai_kinerja = "tidak ada";
                    tunjangan = 0;
                    bonus = 0;
                }
            }
            else {
                status_pegawai = "tidak ada";
                tunjangan = 0;
                bonus = 0;
            }
        }

        else if (jabatan == "Operator" || jabatan == "operator") {
            if (status_pegawai == "Tetap" || status_pegawai == "Kontrak") {
                // lama kerja otomatis "Semua" jika kontrak
                if (nilai_kinerja == "Kurang") {
                    tunjangan = 500000;
                    bonus = 0;
                } else {
                    nilai_kinerja = "tidak ada";
                    tunjangan = 0;
                    bonus = 0;
                }
            } else {
                status_pegawai = "tidak ada";
                tunjangan = 0;
                bonus = 0;
            }
        }

        else {
            // Jika jabatan tidak cocok
            jabatan = "tidak ada";
            status_pegawai = "tidak ada";
            lama_kerja = "tidak ada";
            nilai_kinerja = "tidak ada";
            tunjangan = 0;
            bonus = 0;
        }

        // ================== Output hasil ==================
        cout << "\n=== HASIL PERHITUNGAN ===\n";
        cout << "Jabatan        : " << jabatan << endl;
        cout << "Status Pegawai : " << status_pegawai << endl;
        cout << "Lama Kerja     : " << lama_kerja << endl;
        cout << "Nilai Kinerja  : " << nilai_kinerja << endl;
        cout << "Tunjangan      : Rp " << tunjangan << endl;
        cout << "Bonus          : Rp " << bonus << endl;
        cout << "Total Tambahan : Rp " << tunjangan + bonus << endl;

        return 0;
}

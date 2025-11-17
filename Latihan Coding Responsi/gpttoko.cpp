#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    int jumlahObat;
    string namaPasien;
    char bpjs;

    cout << "PROGRAM PENJUALAN OBAT\n";
    cout << "=========================\n";
    cout << "Jumlah Obat yang dijual : ";
    cin >> jumlahObat;
    cin.ignore(); // membersihkan buffer

    cout << "Nama Pasien : ";
    getline(cin, namaPasien);

    cout << "Peserta BPJS [Y/T]: ";
    cin >> bpjs;

    cout << fixed << setprecision(2);

    double totalSemua = 0.0;
    int i = 1;

    while (i <= jumlahObat) {
        cout << "\nObat ke-" << i << endl;

        string namaObat, satuan;
        double harga;
        int jumlah;

        cout << "Nama obat\t: ";
        cin >> ws;
        getline(cin, namaObat);
        cout << "Satuan Jual\t: ";
        getline(cin, satuan);
        cout << "Harga satuan\t: Rp ";
        cin >> harga;
        cout << "Jumlah Jual\t: ";
        cin >> jumlah;

        double total = harga * jumlah;
        double diskon = 0.0;

        // Diskon 10% jika jumlah > 10
        if (jumlah > 10) {
            diskon = total * 0.10;
        }

        double setelahDiskon = total - diskon;

        // Potongan BPJS 5%
        if (bpjs == 'Y' || bpjs == 'y') {
            double potonganBPJS = setelahDiskon * 0.05;
            setelahDiskon -= potonganBPJS;
        }

        cout << "Total Jual\t: Rp " << total << endl;
        if (diskon > 0) cout << "Diskon 10%\t: Rp " << diskon << endl;
        if (bpjs == 'Y' || bpjs == 'y') cout << "Potongan BPJS 5%\t: Rp " << (total - diskon) * 0.05 << endl;
        cout << "Total Setelah Diskon : Rp " << setelahDiskon << endl;

        totalSemua += setelahDiskon;
        i++;
    }

    // Pajak 10%
    double pajak = totalSemua * 0.10;
    double totalAkhir = totalSemua + pajak;

    // Bonus
    string bonus = (totalAkhir > 1000000) ? "PAYUNG" : "TISSUE";

    cout << "\n==============================\n";
    cout << "Nama Pasien\t: " << namaPasien << endl;
    cout << "Peserta BPJS\t: " << ((bpjs == 'Y' || bpjs == 'y') ? "Y" : "T") << endl;
    cout << "Total Harga Obat\t: Rp" << totalSemua << endl;
    cout << "Pajak 10%\t\t: Rp" << pajak << endl;
    cout << "Total Akhir\t\t: Rp" << totalAkhir << endl;
    cout << "Bonus\t\t\t: " << bonus << endl;
    cout << "==============================\n";

    return 0;
}

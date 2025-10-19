#include <iostream> // menambah package
#include <iomanip> // library pembulatan
#include <sstream> // library untuk string
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() {

    int main() {

    int jenis_kendaraan = 1;
    double harga_ticket, jam_parkir = 0;
    string nama_kendaraan;

    cout << "----------------TICKET PARKIR JAYA MALL-------------------" << endl;
    cout << "==========================================================" << endl;
    cout << "-------------------PVEGANANDA CHANNEL---------------------" << endl;
    cout << endl;
    cout << endl;


    cout << "List Kendaraan : " << endl;
    cout << "1. Motor / Sepeda Listrik / Tossa / Sepeda" << endl;
    cout << "2. Mobil" << endl;
    cout << "3. Truk / Mini Truck / Mini Bus / Bus" << endl;

    cout << "Jenis Kendaraan Anda (1/2/3) = ";
    cin >> jenis_kendaraan;

    system("cls"); // menghapus text di atas.

    cout << "----------------TICKET PARKIR JAYA MALL-------------------" << endl;
    cout << "==========================================================" << endl;
    cout << "-------------------PVEGANANDA CHANNEL---------------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Lama parkir (jam) = ";
    cin >> jam_parkir;


    cout << endl;
    cout << endl;

    // percabangan nested / bersarang

    if (jenis_kendaraan == 1){
        nama_kendaraan = "Motor / Sepeda Listrik / Tossa / Sepeda";
        if (jam_parkir > 12 && jam_parkir <= 24){
            harga_ticket = 50000;
        }else if (jam_parkir > 24) {
            harga_ticket = 50000 + ((jam_parkir - 24) * 3000);
        }else {
            harga_ticket = 3000 * jam_parkir;
        }
    }

    else if (jenis_kendaraan == 2){
        nama_kendaraan = "Mobil";
        if (jam_parkir > 12 && jam_parkir <= 24){
            harga_ticket = 75000;
        }else if (jam_parkir > 24) {
            harga_ticket = 75000 + ((jam_parkir - 24) * 5000);
        }else {
            harga_ticket = 5000 * jam_parkir;
        }
    }

    else if (jenis_kendaraan == 3){
        nama_kendaraan = "Truk / Mini Truck / Mini Bus / Bus";
        if (jam_parkir > 8 && jam_parkir <= 24){
            harga_ticket = 150000;
        }else if (jam_parkir > 24) {
            harga_ticket = 150000 + ((jam_parkir - 24) * 10000);
        }else {
            harga_ticket = 10000 * jam_parkir;
        }
    }
    else {
        nama_kendaraan = "Tidak Tersedia";
        cout << "Jenis Kendaraan Tidak Tersedia" << endl;
        cout << "Gerbang tidak akan terbuka" << endl;
        harga_ticket = 0 ;
        jam_parkir = 0 ;
    }

    cout << "Nama Kendaraan : " << nama_kendaraan << endl;
    cout << "Lama Parkir    : " << jam_parkir << " Jam" << endl;
    cout << "Total Harga    : Rp." << harga_ticket << endl;


    return 0;
}

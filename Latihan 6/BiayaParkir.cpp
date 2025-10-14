#include <iostream> // menambah package
#include <iomanip> // library pembulatan
#include <sstream> // library untuk string
#include <cmath> // library matematika
// nim : A11.2025.16575 - Pasyah Wahyu I. V

using namespace std;

int main() {

    int jenis_kendaraan = 1;
    double harga_ticket, jam_parkir = 0;
    string nama_barang;

    cout << "-------------TBIAYA PARKIR MALL JAYA-------------" << endl;
    cout << "==============================================" << endl;
    cout << "--------------PASYAH WAHYU I. V---------------" << endl;
    cout << endl;
    cout << endl;

    cout << "List Kendaraan:" << endl;
    cout << "1. Motor / Sepeda Listrik / Tossa / Sepeda" << endl;
    cout << "2. Moto" << endl;
    cout << "3. Truk / Mini Truck / Mini Bus / Bus" << endl;
    cout << "Jenis Kendaraan Anda = ";
    cin >> jenis_kendaraan;

    system("cls"); //clear line

    cout << "-------------TBIAYA PARKIR MALL JAYA-------------" << endl;
    cout << "==============================================" << endl;
    cout << "--------------PASYAH WAHYU I. V---------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Lama Parkir (jam) = ";
    cin >> jam_parkir;

    cout << endl;

    cout << fixed << setprecision(0); //agar bilangan double tidak keluar e+ masuk ke library iomanip

        if (jenis_kendaraan == 1) {
            harga_ticket = 3000 * jam_parkir;
            if (jam_parkir > 12){
                harga_ticket = 50000;
            }
            else {
                harga_ticket = 50000 * jam_parkir / 12;
            }
        } else if (jenis_kendaraan == 2)  {
            harga_ticket = 5000 * jam_parkir;
            if (jam_parkir > 12){
                harga_ticket = 75000;
            }
            else {
                harga_ticket = 75000 * jam_parkir / 12;
            }

        } else if (jenis_kendaraan == 3) {
            harga_ticket = 10000 * jam_parkir;
            if (jam_parkir > 12){
                harga_ticket = 150000;
            }
            else {
                harga_ticket = 150000 * jam_parkir / 12;
            }

        } else {
            cout << "Jenis Kendaraan Tidak Tersedia" << endl;
            harga_ticket = 0;
            jam_parkir = 0;
        }


    cout << "Nama Kendaraan : ";
        if ( jenis_kendaraan == 1 )
            { cout<<"Motor / Sepeda Listrik / Tossa / Sepeda"<<endl; }
        else if ( jenis_kendaraan == 2 )
            { cout<<"Mobil"<<endl; }
        else if ( jenis_kendaraan == 3 )
            { cout<<"Truk / Mini Truck / Mini Bus / Bus"<<endl; }
        else
            { cout<<"Jenis Kendaraan Tidak Tersedia"<<endl; }
    cout << "Lama Parkir    : " << jam_parkir << " Jam" << endl;
    cout << "Total Harga    : Rp." << harga_ticket << endl;


    return 0; // akhir line sukses
}

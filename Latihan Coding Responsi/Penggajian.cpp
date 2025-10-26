#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int a = 0;
    int jumlah_karyawan;
    string jabatan;
    int jam_kerja;
    float bonus_jabatan;
    int gaji_perjam;
    long long total_gaji;
    long long gaji_pokok;
    long long gaji_bonus;
    cout << fixed << setprecision(0);//kalau print angka koma hilang.

    cout<<"Masukan jumlah karyawan :";
    cin>>jumlah_karyawan;
    
    while(a<jumlah_karyawan){
        cout<<"Masukan Jabatan :";
        cin>>jabatan;
        cout<<"Masukan Jam Kerja :";
        cin>>jam_kerja;
        cout<<"Masukan Gaji Perjam :";
        cin>>gaji_perjam;


        gaji_pokok = gaji_perjam * jam_kerja;
        

        if(jabatan == "Manager"){
            bonus_jabatan = 0.25;// tipe float
            gaji_bonus = gaji_pokok * bonus_jabatan; // tipe long
            if(jam_kerja > 200){
                gaji_pokok += 500000;
            }
        }
        else if(jabatan == "Staff"){
            bonus_jabatan = 0.15;// tipe float
            gaji_bonus = gaji_pokok * bonus_jabatan; // tipe long
            if(jam_kerja > 200){
                gaji_pokok += 500000;
            }
        }
        else if(jabatan == "Magang"){
            bonus_jabatan = 0.5;// tipe float
            gaji_bonus = gaji_pokok * bonus_jabatan; // tipe long
            if(jam_kerja > 200){
                gaji_pokok += 500000;
            }
        }

        total_gaji = gaji_pokok + gaji_bonus;
        cout<<endl;
        cout<<"========================="<<endl;
        cout<<"Total Jumlah :"<<jumlah_karyawan<<endl;
        cout<<"Jabatan :"<<jabatan<<endl;
        cout<<"Jam Kerja  :"<<jam_kerja<<endl;
        cout<<"Total Gaji Karyan :"<<total_gaji<<endl;
        cout<<"========================="<<endl;
        a++;
    }   
    return 0;
}
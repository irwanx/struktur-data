#include <iostream>
#include <string>
using namespace std;
struct Mahasiswa {
    string nama;
    int nilai;
};
int main() {    
    Mahasiswa mhs1;
    mhs1.nama = "Irwanto";
    mhs1.nilai = 90;
    Mahasiswa mhs2;
    mhs2.nama = "Afrizal";
    mhs2.nilai = 90;
    Mahasiswa mhs3;
    mhs3.nama = "Egi";
    mhs3.nilai = 90;
    Mahasiswa mhs4;
    mhs4.nama = "Farhan";
    mhs4.nilai = 90;
	Mahasiswa mhs5;
    mhs5.nama = "Ikhwan";
    mhs5.nilai = 90;
    Mahasiswa mhs6;
    mhs6.nama = "Dimas";
    mhs6.nilai = 90;
    cout << "Data Mahasiswa :" << endl;
    cout << "Mahasiswa ke-1" << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Nilai: " << mhs1.nilai << endl;
    cout << "Mahasiswa ke-2" << endl;
    cout << "Nama: " << mhs2.nama << endl;
    cout << "Nilai: " << mhs2.nilai << endl;
    cout << "Mahasiswa ke-3" << endl;
    cout << "Nama: " << mhs3.nama << endl;
    cout << "Nilai: " << mhs3.nilai << endl;
    cout << "Mahasiswa ke-4" << endl;
    cout << "Nama: " << mhs4.nama << endl;
    cout << "Nilai: " << mhs4.nilai << endl;
    cout << "Mahasiswa ke-5" << endl;
    cout << "Nama: " << mhs5.nama << endl;
    cout << "Nilai: " << mhs5.nilai << endl;
    cout << "Mahasiswa ke-6" << endl;
    cout << "Nama: " << mhs6.nama << endl;
    cout << "Nilai: " << mhs6.nilai << endl;
    return 0;
}

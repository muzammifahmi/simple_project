#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char name[30];
    int aktif, tugas, ujian, akhir, murniaktif, murniujian, murnitugas;
    cout << "         NILAI AKHIR MAHASISWA\n";
    cout << "JURUSAN TEKNIK ELEKTRO DAN INFORMATIKA\n";
    cout << "      UNIVERSITAS NEGERI MALANG\n";
    cout << "======================================\n\n";

    cout << "Masukkan nama mahasiswa : ";
    cin.getline(name, sizeof(name));
    cout << "Nilai keaktifan         : ";
    cin >> aktif;
    cout << "Nilai tugas             : ";
    cin >> tugas;
    cout << "Nilai ujian             : ";
    cin >> ujian;

    murniaktif = aktif * 20 / 100;
    murnitugas = tugas * 30 / 100;
    murniujian = ujian * 50 / 100;
    akhir = murniujian + murnitugas + murniaktif;

    cout << "Nilai murni keaktifan : " << murniaktif << endl;
    cout << "Nilai murni tugas     : " << murnitugas << endl;
    cout << "Nilai murni ujian     : " << murniujian << endl;
    cout << "Nilai akhir           : " << akhir << endl;

    if (akhir <= 44) {
        cout << "Anda mendapatkan nilai E" << endl;
    } else if (akhir <= 55) {
        cout << "Anda mendapatkan nilai D" << endl;
    } else if (akhir <= 65) {
        cout << "Anda mendapatkan nilai C" << endl;
    } else if (akhir <= 75) {
        cout << "Anda mendapatkan nilai B-" << endl;
    } else if (akhir <= 80) {
        cout << "Anda mendapatkan nilai B" << endl;
    } else if (akhir <= 85) {
        cout << "Anda mendapatkan nilai B+" << endl;
    } else if (akhir <= 90) {
        cout << "Anda mendapatkan nilai A-" << endl;
    } else if (akhir <= 100) {
        cout << "Anda mendapatkan nilai A+" << endl;
    }
    if (akhir <= 44) {
        cout << "Maaf, Anda belum dapat diluluskan. Tingkatkan terus belajar Anda." << endl;
    } else if (akhir <= 65) {
        cout << "Anda lulus, tingkatkan lagi pencapaian Anda." << endl;
    } else if (akhir <= 85) {
        cout << "Anda lulus dengan baik, tingkatkan terus prestasi Anda." << endl;
    } else if (akhir <= 100) {
        cout << "Selamat! Anda lulus dengan nilai yang EXCELLENT!" << endl;
    }
    getch();
    return 0;
}

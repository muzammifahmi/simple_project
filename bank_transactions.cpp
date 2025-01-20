#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int sel, bal1 = 100000, depo, grab, bal2;
    
    do {
        // Tampilan menu
        cout << "=====================================" << endl;
        cout << "\t BANK INDONESIA JAYA " << endl;
        cout << "\t Saldo : " << bal1 << endl;
        cout << "-------------------------------------" << endl;
        cout << "\nMenu Transaksi :" << endl;
        cout << "1. Setor Tabungan" << endl;
        cout << "2. Ambil Tabungan" << endl;
        cout << "3. Keluar" << endl;
        cout << "=====================================" << endl;
        cout << "\n Pilih Menu Transaksi (1/2/3) : ";
        cin >> sel;
        system("cls");

        // Proses transaksi
        if (sel == 1) {
            cout << "\n SETOR TABUNGAN" << endl;
            cout << "\nNominal yang disetorkan : Rp. ";
            cin >> depo;
            bal1 += depo;
            cout << "\nSelamat, Transaksi Anda Berhasil!" << endl;
            cout << "\nJumlah Saldo Anda Sekarang : " << bal1 << endl;
            cout << "\nTerima kasih Telah Menggunakan Jasa Kami" << endl;
            cout << "\nTekan Enter untuk kembali ke menu transaksi";
            getch();
			system("cls");
        } else if (sel == 2) {
            cout << "\n AMBIL TABUNGAN" << endl;
            cout << "\nNominal yang diambil : Rp. ";
            cin >> grab;
            bal2 = bal1 - grab;
            
            if (bal2 < 50000) {
                cout << "\nMaaf, Anda Tidak Bisa Tarik Tunai. Saldo Anda Tidak Mencukupi." << endl;
                cout << "\n(Minimal Saldo Rp50.000,00)" << endl;
                cout << "\nTekan Enter untuk kembali ke menu transaksi";
                getch();
				system("cls");
            } else {
                bal1 = bal2;
                cout << "\nSelamat, Transaksi Anda Berhasil!" << endl;
                cout << "\nJumlah Saldo Anda Sekarang : " << bal1 << endl;
                cout << "\nTerima kasih Telah Menggunakan Jasa Kami" << endl;
                cout << "\nTekan Enter untuk kembali ke menu transaksi";
                getch();
				system("cls");
            }
        }
    } while (sel == 1 || sel == 2);
    
    return 0;
}

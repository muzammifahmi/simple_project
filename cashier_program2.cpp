#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
    string ab, cb;
    int a, b, c, d, e, f, hp, x, y, z;
    cout <<"PT. MAKMUR SUKSES JAYA\n";
    cout <<"Nama kasir             : ";
    cin >>ab;
    cout <<"Nama salesman          : ";
    cin >>cb;
    cout <<"Hasil penjualan barang : Rp.";
    cin >>hp;

    x=15000;
    y=30000;
    z=50000;
    a=hp*15/100;
    b=x+a;
    c=hp*20/100;
    d=y+c;
    e=hp*30/100;
    f=z+e;
    cout     <<"=============================================\n";
    if(hp<=60000){
        cout <<"SELAMAT ANDA MENDAPATKAN KOMISI SEBESAR 15%\n";
        cout <<"Hasil penjualan               :Rp."<<hp<<endl;
        cout <<"Uang jasa                     :Rp."<<x<<endl;
        cout <<"Jumlah komisi yang diterima   :Rp."<<a<<endl;
        cout <<"Total uang jasa yang diterima :Rp."<<b<<endl;
    }else if(hp<=100000){
        cout <<"SELAMAT ANDA MENDAPATKAN KOMISI SEBESAR 20%\n";
        cout <<"Hasil penjualan               :Rp."<<hp<<endl;
        cout <<"Uang jasa                     :Rp."<<y<<endl;
        cout <<"Jumlah komisi yang diterima   :Rp."<<c<<endl;
        cout <<"Total uang jasa yang diterima :Rp."<<d<<endl;
    }else{
        cout <<"SELAMAT ANDA MENDAPATKAN KOMISI SEBESAR 30%\n";
        cout <<"Hasil penjualan               :Rp."<<hp<<endl;
        cout <<"Uang jasa                     :Rp."<<z<<endl;
        cout <<"Jumlah komisi yang diterima   :Rp."<<e<<endl;
        cout <<"Total uang jasa yang diterima :Rp."<<f<<endl;
    }
    getch();
}

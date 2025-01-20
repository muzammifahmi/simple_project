#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main(){
    string a, b;
    int uang, c, d, e, f, g, h;
    cout <<"      Toko berkah Sejahtera \n\n ";
    cout <<"Nama Kasir            : ";
    cin >>a;
    cout <<"Nama pembeli          : ";
    cin >>b;
    cout <<"Masukkan harga barang : ";
    cin >>uang;
    cout <<"\n\n=================================\n";
    c=uang*10/100;
    d=uang-c;
    e=uang*20/100;
    f=uang-e;
    g=uang*30/100;
    h=uang-g;

    if(uang<75000){
        cout <<"SELAMAT ANDA MENDAPATKAN DISKON 10%\n";
        cout <<"Harga awal                      : Rp."<<uang<<endl;
        cout <<"Jumlah potongan harga           : Rp."<<c<<endl;
        cout <<"Jumlah harga yang harus dibayar : Rp."<<d<<endl;
    }else if(uang<=100000){
        cout <<"SELAMAT ANDA MENDAPATKAN DISKON 20%\n";
        cout <<"Harga awal                      : Rp."<<uang<<endl;
        cout <<"Jumlah potongan harga           : Rp."<<e<<endl;
        cout <<"Jumlah harga yang harus dibayar : Rp."<<f<<endl;
    }else{
        cout <<"SELAMAT ANDA MENDAPATKAN DISKON 30%\n";
        cout <<"Harga awal                      : Rp."<<uang<<endl;
        cout <<"Jumlah potongan harga           : Rp."<<g<<endl;
        cout <<"Jumlah harga yang harus dibayar : Rp."<<f<<endl;
    }
    getch();
}

#include <iostream>
using namespace std;

int cari (int *a, int *b, int *c)
{
    if(*c>=*a)
    *a=*c;
    else if(*c<=*b)
    *b=*c;
}
int main(){
    int besar, kecil, data, a=0;
    char pilih;
    cout <<"================================"<<endl;
    cout <<"         MODUL FUNCTION"<<endl;
    cout <<"================================"<<endl;
    cout <<"         MENENTUKAN BATAS"<<endl;
    cout <<"================================"<<endl;
    while (pilih!='n')
    {
        cout <<"masukkan data : ";
        cin >>data;
        cout <<"masukkan data lagi?(y/n) : ";
        cin >>pilih;
        if (a==0)
        {
            besar==data;
            kecil==data;
        }
        a++;
        cari(&besar, &kecil, &data);
    }
    cout <<endl<<endl;
    cout <<"data terbesar : "<<besar<<endl;
    cout <<"data terkecil : "<<kecil<<endl;
}

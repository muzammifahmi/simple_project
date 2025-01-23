#include <iostream.h>

int faktorial (int a)
{
    if (a==1)
    return 1;
    else 
    return a*faktorial (a-1);
}
int combinasi (int n, int r)
{
    return faktorial (n)/(faktorial(n-r)*faktorial(r));
}
int main(){
    int n, r;
    cout <<"=================================="<<endl;
    cout <<"          MODUL FUNCTION"<<endl;
    cout <<"=================================="<<endl;
    cout <<"         PROGRAM COMBINASI"<<endl;
    cout <<"==================================\n\n"<<endl;
    cout <<"masukkan nilai n : ";
    cin >>n;
    cout <<"masukkan nilai r : ";
    cin >>r;
    cout <<"hasil combinasi"<<n<<"C"<<r<<" adalah: "<<combinasi(n, r);
    return 0;

}

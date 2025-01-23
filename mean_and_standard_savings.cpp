#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void line(){
    for(int i=0; i<60; i++)
    cout <<"-";
    cout <<endl;
}
int main(){
    int a=0;
    float data[60], rata, sb, jumlah=0, xi, totalxi;
    char ulang;
    cout <<"===================================="<<endl;
    cout <<"              MODUL FUNCTION"<<endl;
    cout <<"===================================="<<endl;
    cout <<"           PROGRAM STANDAR DEVIASI"<<endl;
    cout <<"===================================="<<endl;
    do
    {
        cout <<"masukkan data : ";
        cin >>data[a];
        jumlah=jumlah+data[a];
        a++;
        cout <<"masukkan data lagi?(y/n) : ";
        cin >>ulang;
    }
    while (ulang=='y' || ulang=='Y');
    cout <<endl;
    rata=jumlah/a;
    cout <<"nilai rata rata : "<<rata;
    cout <<endl;
    totalxi=0;
    for (int x=0; x<a; x++)
    {
        xi=data[x]-rata;
        totalxi=totalxi+(xi*xi);
    }
    sb=sqrt(totalxi/(a-1));
    cout <<"\nsimpanan baku : "<<sb<<endl;
    getch();
}

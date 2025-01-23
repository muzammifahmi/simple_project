#include <iostream>
using namespace std;

#define phi 3.14
float luas (float r, float t)
{
    return (2*(phi*r*r))+(2*phi*r*t);
}
float selimut (float r, float t)
{
    return 2*phi*r*t;
}
float volume (float r, float t)
{
    return phi*r*r*t;
}
int main(){
    int r, t;
    cout <<"====================================="<<endl;
    cout <<"       MODUL FUNCTION"<<endl;
    cout <<"====================================="<<endl;
    cout <<"       PROGRAM COMBINASI"<<endl;
    cout <<"       PROGRAM TABUNG"<<endl;
    cout <<"====================================="<<endl<<endl;
    cout <<"masukkan nilai jari jari tabung : ";
    cin >>r;
    cout <<"masukkan nilai tinggi tabung :";
    cin >>t;
	cout <<"====================================="<<endl;
    cout <<"nilai luas tabung : "<<luas (r, t)<<endl;
    cout <<"nilai selimut tabung : "<<selimut (r, t)<<endl;
    cout <<"nilai volume tabung : "<<volume (r, t)<<endl;
	cout <<"====================================="<<endl;
    return 0;
}

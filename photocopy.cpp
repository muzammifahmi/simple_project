#include <iostream.h>

int main()
{
	int harga[100], jumlah[100];
	int a;
	for(a=0; a<100; a++)
	{
		jumlah[a]=a+1;
		harga[a]=jumlah[a]*80;
		if (jumlah[a]%20==0)
		{
			harga[a]=jumlah[a]*60;
		}
	}
	cout<<" | Jumlah(lbr) | Harga (Rp.) |"<<endl;
	cout<<" +-------------+-------------+"<<endl;
	for(a=0; a<100; a++)
	{
		cout<<" | "<<jumlah[a]<<"\t       | "<<harga[a]<<"\t     |"<<endl;
	}
	cout<<" +-------------+-------------+"<<endl;
}

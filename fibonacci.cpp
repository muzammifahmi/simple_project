#include <iostream.h>

int main()
{
	int i, n, jumlah[99], jumlah2;
	cout<<"Masukkan jumlah n : ";
	cin>>n;
	for (i=0; i<n; i++){
		if(i<2){
		  jumlah[i]=i;
		}else{
		  jumlah[i]=jumlah[i-2]+jumlah[i-1];
		}
	}
	cout<<"Hasilnya adalah : ";
	for (i=0; i<n; i++)
	{
		cout<<jumlah[i]<<" ";
	}
	cout<<endl;
	jumlah2=jumlah[i-1];
	cout<<"Hasilnya adalah : "<<jumlah2<<endl<<endl;
	int prima=1;
	for(int a=2; a<jumlah2; a++)
	{
		if(jumlah2%a==0)
		{
			prima=0;
		}
	}
	if(prima)
	{
		cout<<" Bilangan prima";
	}
	else cout<<" Bukan bilangan prima";
}

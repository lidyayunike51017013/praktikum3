#include <iostream.h>
#include <conio.h>
int main ()
{ int n, m;
float l;
cout<<"masukan tanggal kelahiran anda (n) : "; cin>>n;
cout<<"masukan bulan kelahiran anda (m) : "; cin>>m;
cout<<"masukan tahun lahir anda (l), isi 2 digit akhir : " ;
cin>> l ;

n += m;
cout<<"Nilai n += m "<<n<<endl;
n -= m;
cout<<"Nilai n -= m "<<n<<endl;
n %= m;
cout<<"Nilai n %= m "<<n<<endl;
n *= m;
cout<<"Nilai n *= m "<<n<<endl;
l /= m;
cout<<"Nilai l /= m "<<l<<endl;
return(0) ;
}


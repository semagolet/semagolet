#include <iostream>
float pi=3.14159265;
using namespace std;
class Silindir
{
	public:
	int r;
	int h;
	float yuzeyselAlanHesapla();
	float hacimHesapla();
};
float Silindir::yuzeyselAlanHesapla()
{
	return 2*pi*r*h+2*pi*r*r;
}
float Silindir::hacimHesapla()
{
	return pi*r*r*h;
}
int main()
{
	Silindir silindir; //silindir classýnda silindir nesnesi oluþturulur
	cout<<"Yukseklik (h):";
	cin>>silindir.h;
	cout<<"Taban yaricapi (r):";
	cin>>silindir.r;
	cout<<"_ _ _ _ _ _ _ _ _ _ "<<endl;
	cout<<"Yuzey alani (A):"<<silindir.yuzeyselAlanHesapla()<<endl;
	cout<<"Hacim (H):"<<silindir.hacimHesapla()<<endl;
	return 0;
}

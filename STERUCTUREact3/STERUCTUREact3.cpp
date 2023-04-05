#include <iostream>
using namespace std;

struct DetailAlamat
{
	char Desa[20];
	char Kota[20];
};
struct mahasiswa
{
	char nama[20];
	char nim[12];
	DetailAlamat alamat;
	int umur;
};


int main() {
	mahasiswa mhs[20];
	for (int i = 0; i < 3; i++)
	{
		cout << "masukan nim =";
		cin.getline(mhs[i].nim, 12);
		cout << "masukan umur=";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "masukan nama=";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat=";
		cout << "\n\tMasukan Desa =";
		cin.getline(mhs[i].alamat.Desa, 20);
		cout << "\n\tMasukan Kota =";
		cin.getline(mhs[i].alamat.Kota, 20);
	}

	
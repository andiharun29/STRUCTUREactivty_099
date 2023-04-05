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
	mahasiswa mhs;

	cout << "masukan nim =";
	cin.getline(mhs.nim, 12);
	cout << "masukan umur=";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "masukan nama=";
	cin.getline(mhs.nama, 20);
	cout << "Alamat=";
	cout << "\n\tMasukan Desa =";
	cin.getline(mhs.alamat.Desa, 20);
	cout << "\n\tMasukan Kota =";
	cin.getline(mhs.alamat.Kota, 20);

	
}
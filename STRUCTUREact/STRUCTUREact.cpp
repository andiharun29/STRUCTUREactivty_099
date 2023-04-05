#include <iostream>
using namespace std;

struct mahasiswa
{
	string nama;
	string nim;
	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs, mhs2;

	mhs.nim = "20220140099";
	mhs.umur = 20;
	mhs.nama = "andi harun al rasyid";
	mhs.alamat = "kendari";

	cout << "masukan nim =";
	cin >> mhs2.nim;
	cout << "masukan umur=";
	cin >> mhs2.umur;
	cout << "masukan nama=";
	cin >> mhs2.nama;
	cout << "masukan alamat=";
	cin >> mhs2.alamat;

	cout << "NIM =" << mhs.nim;
	cout << "\nUmur =" << mhs.umur;
	cout << "\nNama =" << mhs.nama;
	cout << "\nAlamat =" << mhs.alamat;

	
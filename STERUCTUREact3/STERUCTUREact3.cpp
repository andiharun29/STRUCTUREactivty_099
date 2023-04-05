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
		
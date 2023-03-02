#include <conio.h>
using namespace std;
struct RekamanBuku {
	string judul;
	string pengarang;
	int jumlah;
};
int main()
{
	struct RekamanBuku *novel, buku;
	buku.judul = "Badai pasti berlalu";
	buku.pengarang = "Marga T.";
	buku.jumlah = 2;
	novel =& buku;
	cout << "Judul\t:" << novel -> judul << endl;
	cout << "Pengarang\t:" << novel-> pengarang << endl;
	cout << "Jumlah\t:" << novel -> jumlah << endl;
	getch();
}

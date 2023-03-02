#include <iostream>
using namespace std;
int main(){
	int a=10, b, *c =&a;
	cout << "Alamat A\t: " << &a << endl;
	cout << "Alamat B\t: " << &b << endl;
	cout << "Alamat C\t: " << c << endl ;
}

#include <iostream>
using namespace std;
int main() {
	int nilai[]={7,3,5,10};
	int lenght=sizeof(nilai)/sizeof(*nilai);
	int temp;
	for(int a=1;a<length;a++){
		for(int b=0;b<length;b++){
			if(nilai[b]>nilai[b+1]){
				temp=nilai[b];
				nilai[b]=nilai[b+1];
				nilai[b+1]=temp;
			}
		}
		for(int c=0;c<length;c++){
			cout << nilai[c] << "|";
			cout << endl;
		}
	}
	cout << "Hasil Sorting : " << endl;
	for(int x=0; x<lenght;x++){
		cout << " " << nilai[x] << endl;
	}
}

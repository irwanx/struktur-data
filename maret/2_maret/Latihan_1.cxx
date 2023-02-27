#include <iostream>  // for std::cout and std::cin

int main()
{
    int x{ }, y{ }, z; 
    std::cout << "Program Menjumlahkan Angka X dan Y\n" << "Masukkan Angka X\t: "; // ask user for a number
    std::cin >> x;  // get number from keyboard and store it in variable X
    std::cout << "Masukkan Angka Y\t: "; // ask user for a number
    std::cin >> y; // get number from keyboard and store it in variable Y
    z=x+y;
    std::cout << "Hasil Penjumlahan Dari " << x << " + " << y << " Adalah : " << z << "\n";
    return 0;
}

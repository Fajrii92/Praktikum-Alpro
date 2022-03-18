#include <iostream>
#include "fungsi.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int a, b, menu;
	cout << "PROGRAM KALKULATOR" << endl;
	cout << "Menu Operasi : " << endl;
	cout << "1. Penambahan" << endl;
	cout << "2. Pengurangan" << endl; 
	cout << "3. Perkalian" << endl;
	cout << "4. Pembagian" << endl;
	cout << "Pilih Menu No : ";
	cin >> menu;
	cout << "Masukkan Bilangan Pertama : ";
	cin >> a;
	cout << "Masukkan Bilangan Kedua : ";
	cin >> b;
	if (menu == 1){
		cout << "hasil " << a << " + " << b << " = " << penambahan(a,b);
	}
	else if(menu == 2){
		cout << "hasil " << a << " - " << b << " = " << pengurangan(a,b);
	}
		else if(menu == 3){
		cout << "hasil " << a << " * " << b << " = " << perkalian(a,b);
	}
		else if(menu == 4){
		cout << "hasil " << a << " : " << b << " = " << pembagian(a,b);
	}
	return 0;
}

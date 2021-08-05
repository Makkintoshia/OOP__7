#include <fstream>
#include<iostream>
#include <Windows.h>
#include <iomanip>	
#include <iostream>                                                                  
using namespace std;


class Vector
{
private:
	char* vec;
	int size;
public:
	
	Vector() {};

	Vector(int size)
	{
		cout << "Vector" << endl;
		this->size = size;
		vec = new char[size];
		for (int i = 0; i < size; i++)
		{
			vec[i] = 'a';
			cout << vec[i] << endl;

		}
		cout << endl;
	}
};












int main()

{
	setlocale(LC_ALL, "rus");
	ofstream f("file.txt");
	 char ch = 'a';
	for (;;) {
		if (ch== '*')
		{
			break;
		}
		else {
			double chislo, rez, stepen;
			cin >> chislo;
			cin >> stepen;
			rez = 1;
			for (int i = 0; i < stepen;i++)
			{
				rez *= chislo;
			}

			f << setw(15) << setprecision(3) << rez;
		}cout << "Введите * если хотите выйти из цикла";
		cin >> ch;
		
	}


	f.close();

	Vector vector(3);

}


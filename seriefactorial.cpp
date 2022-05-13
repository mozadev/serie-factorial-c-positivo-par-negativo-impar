

#include <iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string>


using namespace std;

int ingresen()
{
	int Num;
	cout << "ingrese cantidad de terminos:  "; cin >> Num;
	while (Num <= 0 || Num>=25)
	{
		cout << "ingrese cantidad de terminos positivo y menor que 25 : "; cin >> Num;
	}
	return Num;
}

float factorial(int b)
{
	float res = 1;
	int i = 1;
	while (i <= b)//mientrs que
	{
		res = res * i;
		i++;
	}
	return res;
}


float calculapotencia(float b, int e)
{
	float result = 1;
	int i = 1;
	while (i <= e)
	{
		result = result * b;
		i++;
	}
	return result;
}



float sumaserie()
{
	float n, suma = 0;
	float x;
	string cadena = " ";
	n = ingresen();
	for (int i = 1; i <= n; i++)
		if (i % 2 == 0) {
			suma = suma + ((calculapotencia(i, i) + i) / ((3 * i - 3) + factorial(i)));
			cadena = cadena  + to_string((calculapotencia(i, i) + i) / ((3 * i - 3) + factorial(i))) + " ";
			
		}

		else{
		suma = suma - ((calculapotencia(i, i) + i) / ((3 * i - 3) + factorial(i)));
		cadena = cadena + "-"+to_string((calculapotencia(i, i) + i) / ((3 * i - 3) + factorial(i))) + " ";
		
	}
	cout << cadena;
	cout << endl;
		
	return suma;
}



int main()
{

	cout <<  "  la suma de terminos es: "<< sumaserie();
	_getch();
}

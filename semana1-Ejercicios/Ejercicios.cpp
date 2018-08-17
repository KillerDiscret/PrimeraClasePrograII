#include	<iostream>
#include	<conio.h>
using namespace std;
using namespace System;



int MENU()
{
	int opcion;
	do
	{
		system("cls");
		cout << "[1]Generar los datos del arreglo en forma aleatoria" << endl;
		cout << "[2]Listar en pantalla los elementos del arreglo" << endl;
		cout << "[3]Buscar el mayor y mostrar su ubicacion" << endl;
		cout << "[4]Buscar el menos y mostrar su ubicacion" << endl;
		cout << "[5]Ordenar el arreglo en forma descendente y mostrarlo en pantalla" << endl;
		cout << "INGRESE UNA OPCION:" << endl;
		cin >> opcion;
	} while (opcion<1 || opcion>5);
	return opcion;
}
int*GenerarDatosAleatorios(int *N)
{
	Random numero;
	int *NuevoArreglo = new int[*N];
	for (int i = 0; i < *N; i++)
	{
		NuevoArreglo[i] = numero.Next(0, 1001);
	}
	return NuevoArreglo;
}
void ListarEnPantalla(int*Arreglo, int *N)
{
	if (*N > 0 || Arreglo != NULL)
	{
		for (int i = 0; i<*N; i++)
		{
			cout << "N." << i + 1 << " " << Arreglo[i] << endl;
		}
	}
	else
	{
		cout << "No hay elementos en el arreglo" << endl;
	}
	_getch();
}
void BuscarMayor(int*Arreglo, int *N)
{
	int mayor;
	int auxiliar;
	int repeticiciones=0;
	
		auxiliar = Arreglo[0];
		for (int j=0; j<*N;j++)
		{

			if (auxiliar < Arreglo[j])
			{
				mayor = Arreglo[j];
				auxiliar = mayor;
			}
		}
	cout << "El numero mayor es: " << endl;
	cout << mayor<<endl;
	for (int i=0; i<*N;i++)
	{
		if (mayor==Arreglo[i])
		{
			cout << "La posicion del mayor es:" << endl;
			cout<< i+1;
			cout << endl;
			repeticiciones++;
		}
	}
	cout << "El valor se repite " << repeticiciones << " veces" << endl;

	_getch();
}
int main()
{
	int menu;
	int *Arreglo = NULL;
	int *N = new int;
	*N = 0;
	Random tamaño;

	while (1)
	{

		menu = MENU();
		if (menu == 1)
		{
			*N = tamaño.Next(0, 101);
			Arreglo = GenerarDatosAleatorios(N);
		}
		if (menu == 2)
		{
			ListarEnPantalla(Arreglo, N);
		}
		if (menu == 3)
		{
			BuscarMayor(Arreglo, N);
		}
		if (menu == 4)
		{

		}
		if (menu == 5)
		{

		}


	}

	_getch();
	return 0;
}
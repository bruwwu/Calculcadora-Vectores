#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
using namespace std;
class App
{
public:
	App();
	~App();

	void Menu() {
		cout << "1.- Vector 2D" << endl;
		cout << "2.- Vector 3D" << endl;
		cout << "3.- Vector 4D" << endl;
		cout << "4.- Salir" << endl;
		cout << "Ingrese una opcion: ";

		int op;
		cin >> op;
		switch (op)
		{
		case 1:
			Menu2D();
			break;
		case 2:
			Menu3D();
			break;
		case 3:
			Menu4D();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "op no valida" << endl;
			break;
		}

	}

	void Menu2D()
	{
		cout << "1.- Suma de vectores" << endl;
		cout << "2.- Resta de vecotres" << endl;
		cout << "3.- Multiplicacion de vectores" << endl;
		cout << "4.- Division de vectores" << endl;
		cout << "5.- Producto Punto de vectores" << endl;
		cout << "6.- Producto Cruz de vectores" << endl;
		cout << "7.- Magnitud de vectores" << endl;
		cout << "8.- Normalizar de vectores" << endl;
		cout << "9.- Salir" << endl;
		cout << "Ingrese una opcion: ";

		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "Ingresa valores del 1er vector (x1 y1): ";
			cin >> x1 >> y1;
			cout << "Ingresa valores del 2do vector(x2 y2): ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Sum(v2);
			cout << "El total de la suma es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1.- Si // 2.- No) ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 2:
		{
			cout << "Ingrese los valores del 1er vector (x1, y1): ";
			cin >> x1 >> y1;
			cout << "Ingrese ngrese los valores del 1er vector (x2, y2): ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Res(v2);
			cout << "El total de la resta es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1.- Si // 2.- No) ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 3:
		{
			cout << "Ingrese los valores del primer vector (x1, y1): ";
			cin >> x1 >> y1;
			cout << "Ingrerese los valores del primer vector(x2, y2): ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Mul(v2);
			cout << "el resultado de la multiplicacion es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar?(1.- Si // 2.- No) ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 4:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1): ";
			cin >> x1 >> y1;
			cout << "Ingrese las componentes del segundo vector (x2 y2): ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.Div(v2);
			cout << "El total de la division es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1.- Si // 2.- No)";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 5:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1): ";
			cin >> x1 >> y1;
			cout << "Ingrese las componentes del segundo vector (x2 y2): ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			double v3 = v1.ProdEsc(v2);
			cout << "El producto escalar de los vectores es: " << v3;
				cout << "\n ¿Desea continuar? (1.- Si // 2.- No)";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 6:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1): ";
			cin >> x1 >> y1;
			cout << "Ingrese las componentes del segundo vector (x2 y2): ";
			cin >> x2 >> y2;
			Vector2 v1(x1, y1);
			Vector2 v2(x2, y2);
			Vector2 v3 = v1.ProdVect(v2);
			cout << "El producto cruz de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 7:
		{
			cout << "Ingrese las componentes del vector (x1 y1): ";
			cin >> x1 >> y1;
			Vector2 v1(x1, y1);
			double mag = v1.Magnitud();
			cout << "La magnitud del vector es: " << mag << endl;
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 8:
		{
			cout << "Ingrese las componentes del vector (x1 y1): ";
			cin >> x1 >> y1;
			Vector2 v1(x1, y1);
			Vector2 v2 = v1.Normalizar();
			cout << "El vector normalizado es: ";
			v2.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 9:
		{
			Menu();
			break;
		}
		}
	}

	void Menu3D()
	{
		cout << "1.- Suma de vectores" << endl;
		cout << "2.- Resta de vecotres" << endl;
		cout << "3.- Multiplicacion de vectores" << endl;
		cout << "4.- Division de vectores" << endl;
		cout << "5.- Producto Punto de vectores" << endl;
		cout << "6.- Producto Cruz de vectores" << endl;
		cout << "7.- Magnitud de vectores" << endl;
		cout << "8.- Normalizar de vectores" << endl;
		cout << "9.- Salir" << endl;
		cout << "Ingrese una opcion: ";

		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2): ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Sum(v2);
			cout << "La suma de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 2:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2): ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Res(v2);
			cout << "La resta de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;
			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 3:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2): ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Mul(v2);
			cout << "La multiplicacion de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 4:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2): ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.Div(v2);
			cout << "La division de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 5:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2): ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			double v3 = v1.ProdEsc(v2);
			cout << "El producto escalar de los vectores es: " << v3;
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 6:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2): ";
			cin >> x2 >> y2 >> z2;
			Vector3 v1(x1, y1, z1);
			Vector3 v2(x2, y2, z2);
			Vector3 v3 = v1.ProdVect(v2);
			cout << "El producto cruz de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 7:
		{
			cout << "Ingrese las componentes del vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			Vector3 v1(x1, y1, z1);
			double mag = v1.Magnitud();
			cout << "La magnitud del vector es: " << mag << endl;
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 8:
		{
			cout << "Ingrese las componentes del vector (x1 y1 z1): ";
			cin >> x1 >> y1 >> z1;
			Vector3 v1(x1, y1, z1);
			Vector3 v2 = v1.Normalizar();
			cout << "El vector normalizado es: ";
			v2.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 9:
		{
			Menu();
			break;
		}
		}
	}

	void Menu4D()
	{
		cout << "1.- Suma de vectores" << endl;
		cout << "2.- Resta de vecotres" << endl;
		cout << "3.- Multiplicacion de vectores" << endl;
		cout << "4.- Division de vectores" << endl;
		cout << "5.- Producto Punto de vectores" << endl;
		cout << "6.- Producto Cruz de vectores" << endl;
		cout << "7.- Magnitud de vectores" << endl;
		cout << "8.- Normalizar de vectores" << endl;
		cout << "9.- Salir" << endl;
		cout << "Ingrese una opcion: ";

		int op;
		cin >> op;
		switch (op)
		{
		case 1:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2 w2): ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.Sum(v2);
			cout << "La suma de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 2:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2 w2): ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.Res(v2);
			cout << "La resta de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}
			break;
		}
		case 3:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2 w2): ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.Mul(v2);
			cout << "La multiplicacion de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 4:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2 w2): ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			Vector4 v3 = v1.Div(v2);
			cout << "La division de los vectores es: ";
			v3.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 5:
		{
			cout << "Ingrese las componentes del primer vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			cout << "Ingrese las componentes del segundo vector (x2 y2 z2 w2): ";
			cin >> x2 >> y2 >> z2 >> w2;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2(x2, y2, z2, w2);
			double v3 = v1.ProdEsc(v2);
			cout << "El producto escalar de los vectores es: " << v3;
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 1)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 6:
		{
			cout << "Ingrese las componentes del vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			Vector4 v1(x1, y1, z1, w1);
			double mag = v1.Magnitud();
			cout << "La magnitud del vector es: " << mag << endl;
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 2)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 7:
		{
			cout << "Ingrese las componentes del vector (x1 y1 z1 w1): ";
			cin >> x1 >> y1 >> z1 >> w1;
			Vector4 v1(x1, y1, z1, w1);
			Vector4 v2 = v1.Normalizar();
			cout << "El vector normalizado es: ";
			v2.Mostrar();
			cout << "\n ¿Desea continuar? (1) Si (2) No ";
			int op;
			cin >> op;

			if (op == 2)
			{
				Menu();
			}
			else
			{
				exit(0);
			}

			break;
		}
		case 8:
		{
			Menu();
			break;
		}
		}
	}
private:
	double w1, x1, y1, z1, w2, x2, y2, z2;

};


#include <iostream>
#include <conio.h> 
#include <stdio.h>
#include <stdlib.h>
using  namespace std;

int main()
{
	char nombre[40], descripcion[100], clasificacion[10], genero[30], consola[30];
	int precio, impuesto, total, opcion, desicion;


    cout << "\t ***MENU DE OPCIONES***" << endl; 
    cout << "1.-Alta de articulos" << endl;
    cout << "2.-Baja de articulos" << endl;
    cout << "3.-Modificacion de articulos" << endl;
    cout << "4.-Lista" << endl;
    cout << "5.-Limpiar Pantalla" << endl;
    cout << "6.-Salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: //ALTA
        cout << "Ingrese el nombre del videojuego:";
        cin >> nombre;
        cout << "Ingrese descripcion del videojuego:";
        cin >> descripcion;
        cout << "Ingrese la clasificacion:";
        cin >> clasificacion;
        cout << "Ingrese el genero:";
        cin >> genero;
        cout << "Ingrese la consola:";
        cin >> consola;
        cout << "Precio unitario:";
        cin >> precio;
        
       
        impuesto = precio * 0.16;
        cout << "\nImpuesto: " << impuesto;
        total = impuesto + precio;
        cout << "\nTotal: " << total << endl;
        
        cout << "¿Quiere regresar al menu?" << endl;
        cout << "1.- si" << endl;
        cout << "2.- no" << endl;
        cin >> desicion;
        if (desicion == 1)
        {
            //system("pause");
            return main();
        }
        break;
    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        system("cls"); // limpiar pantalla
        return main();
        break;
    case 6:
        return 0;
        exit(1);
        break;

    }
}

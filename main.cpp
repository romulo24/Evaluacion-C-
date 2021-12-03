#include <iostream>
#include<controlador.h>
using namespace std;

int main()
{
    cout <<"        Universidad Politecnica Salesiana           "<< endl;
    int opc;
    Controlador *impresora=new Controlador();
    do {
        cout << "                   GRUPO TECH         " << endl;
        cout << "1. Listar impresoras" << endl;
        cout << "2. Ingresar contadores"<< endl;
        cout << "3. Imprimir reporte"<< endl;
        cout << "4. Salir"<< endl;
        cout << "Ingrese su opcion: ";
        cin >> opc;
        switch (opc) {
        case 1:
            cout << "\n=====Listado de Impresoras=====" << endl;
            impresora->listarImpresoras();

            break;
        case 2:
            cout << "\n=====Ingreso de Contadores=====" << endl;
            impresora->IngresarContadores();

            break;
        case 3:
            cout << "\n=====Impresion de Reporte=====" << endl;
            impresora->imprimirReporte();

            break;
        case 4:
            cout << "\n!!VUELVA PRONTO !!" << endl;
            break;
        default:
            cout << "\n!!!! ERROR: Opcion invalida !!!!" << endl;

            break;
        }

    } while (opc!=4);
    return 0;
}

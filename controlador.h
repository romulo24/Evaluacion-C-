#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include<impresora.h>
#include<negro.h>
#include<color.h>
#include <iostream>

class Controlador{

private:
    Impresora *impresoras[2];
    float costoBN;
    float costoC;
protected:
    int temporal;
    int temporal2;
    int temporal3;
public:
    Controlador();
    void listarImpresoras();
    void IngresarContadores();
    void imprimirReporte();
};

#endif // CONTROLADOR_H

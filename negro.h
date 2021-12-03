#ifndef NEGRO_H
#define NEGRO_H
#include<impresora.h>

class Negro: public Impresora
{
private:

    int contadorN;
public:
    Negro();
    Negro(string marca, string modelo, int anio, string serie, bool tipo, string direccion_ip,int contadorN);
    void setcontadorN(int valor);
    string Informacion();
    int getContadorN();
    int total();
};

#endif // NEGRO_H

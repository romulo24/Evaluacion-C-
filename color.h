#ifndef COLOR_H
#define COLOR_H
#include<negro.h>

class Color: public Negro
{
    int contadorColor;
public:
    Color();
    Color(string marca, string modelo, int anio, string serie, bool tipo, string direccion_ip,int contadorN,int contadorColor);
    int getcontadorColor();
    void setcontadorColor(int valor);
    string Informacion();
};

#endif // COLOR_H

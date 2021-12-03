#include "color.h"

void Color::setcontadorColor(int valor)
{
    this->contadorColor = valor;
}

int Color::getcontadorColor()
{
     return this->contadorColor;
}

string Color::Informacion()
{
    return Negro::Informacion();
}

Color::Color()
{
    this->contadorColor=0;
}

Color::Color(string marca, string modelo, int anio, string serie, bool tipo, string direccion_ip, int contadorN, int contadorColor):Negro(marca,modelo,anio,serie,tipo,direccion_ip,contadorN)
{
  this->contadorColor = contadorColor;
}

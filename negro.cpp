#include "negro.h"

int Negro::getContadorN()
{
    return contadorN;
}

int Negro::total()
{
    return getContadorN();
}

Negro::Negro()
{
    this->contadorN=0;
}

Negro::Negro(string marca, string modelo, int anio, string serie, bool tipo, string direccion_ip, int contadorN):Impresora(marca,modelo,anio,serie,tipo,direccion_ip)
{
    this->contadorN=contadorN;

}

void Negro::setcontadorN(int valor)
{
    this->contadorN=valor;
}
string Negro::Informacion()
{
    return Impresora::Informacion()+"\nContador Total: "+ to_string(getContadorN()+getcontadorColor())+"\n";

}



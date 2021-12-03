#include "impresora.h"

Impresora::Impresora()
{
    this->marca="";
    this->modelo = " ";
    this->anio = 0;
    this->serie = " ";
    this->tipo = false ;
    this->direccionde_ip = " ";

}

Impresora::Impresora(string marca, string modelo, int anio, string serie, bool tipo, string direccion_ip)
{
    this->marca=marca;
    this->modelo=modelo;
    this->anio=anio;
    this->serie=serie;
    this->tipo=tipo;
    this->direccionde_ip=direccion_ip;
}
string Impresora::getModelo()
{
    return this->modelo;
}

void Impresora::setModelo(string newModelo)
{
    this->modelo = newModelo;
}

int Impresora::getAnio()
{
    return this->anio;
}

void Impresora::setAnio(int newAnio)
{
    this->anio = newAnio;
}

string Impresora::getMarca()
{
    return this->marca;
}

void Impresora::setMarca(string newMarca)
{
    this->marca = newMarca;
}

string Impresora::Tipo()
{
    return this->tipo == false ? "Blanco y Negro" : "Color";
}

string Impresora::Informacion()
{
    return "\nMarca: "+this->marca
            +"\nModelo: " +  this->modelo
            + "\nAnio:" + to_string(this->anio)
            + "\nSerie: " + this->serie
            +"\nTipo: " + this->Tipo()
            +"\nDireccion IP: "+ this->direccionde_ip;
}

void Impresora::setcontadorN(int valor)
{
    this->anio=valor;

}

void Impresora::setcontadorColor(int valor)
{
    this->anio=valor;
}

int Impresora::getContadorN()
{
    return 0;
}

int Impresora::getcontadorColor()
{
    return 0;
}






#ifndef IMPRESORA_H
#define IMPRESORA_H

#include <iostream>
using namespace std;
class Impresora
{
    string marca;
    string modelo;
    int anio;
    string serie;
    bool tipo;
    string direccionde_ip;


public:

    Impresora();
    Impresora(string marca,string modelo,int anio,string serie,bool tipo,string direccion_ip);
    string getModelo() ;
    void setModelo(string newModelo);
    int getAnio();
    void setAnio(int newAnio);
    string getMarca();
    void setMarca(string newMarca);
    string getSerie();
    void setSerie(string newSerie);
    bool getTipo();
    void setTipo(bool newTipo);
    string getDireccionde_ip();
    void setDireccionde_ip(string newDireccionde_ip);
    string Tipo();
    virtual string Informacion();
    virtual  void setcontadorN(int valor);
    virtual int getContadorN();
    virtual void setcontadorColor(int valor);
    virtual int getcontadorColor();


};

#endif // IMPRESORA_H

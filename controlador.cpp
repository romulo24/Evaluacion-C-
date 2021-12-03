#include "controlador.h"

Controlador::Controlador()
{
    impresoras[0] = new Negro("RICOH","SP 3510SF",2016,"T332QB00324",false,"192.168.100.64",0);
    impresoras[1] = new Color("RICOH","MP C300",2017,"S7225600246",true,"192.168.100.46",0,0);
    this->costoBN = 0.035;
    this->costoC = 0.06;
}

void Controlador::listarImpresoras()
{
    for(int i=0;i<2;i++){
        cout<<impresoras[i]->Informacion();
    }

}

void Controlador::IngresarContadores()
{
    int opc;
    int contador,contador2;
    cout<<""<<endl;
    cout<<"Seleccione la impresora"<<endl;
    cout<<" "<<endl;
    cout<<"1._Impresora Blaco y Negro"<<endl;
    cout<<"2._Impresora Color"<<endl;
    cout<<"Ingrese un numero:"<<endl;
    cin>>opc;
    switch (opc) {
    case 1:
        temporal = impresoras[0]->getContadorN();
        cout << "\n--Agregue contadores nuevos para: "<<impresoras[0]->getModelo()<<endl;
        cout <<"Nuevo contador B/N: ";
        cin>>contador;
        impresoras[0]->setcontadorN(contador);
        cout<<"\n!!CONTADORES ACTUALIZADOS CORRECTAMENTE!!\n\n";
        break;
    case 2:
        temporal2 = impresoras[1]->getContadorN();
        temporal3 =impresoras[1]->getcontadorColor();
        cout << "\n--Agregue contadores nuevos para: " << impresoras[1]->getModelo()<<endl;
        cout <<"Nuevo contador B/N: ";
        cin>>contador;
        cout <<"Nuevo contador Color: ";
        cin>>contador2;
        impresoras[1]->setcontadorN(contador);
        impresoras[1]->setcontadorColor(contador2);
        cout<<"\n!!CONTADORES ACTUALIZADOS CORRECTAMENTE!!\n\n";
        break;
    }
}

void Controlador::imprimirReporte()
{
    cout<<impresoras[0]->getModelo()<<" [ Impresiones B/N "<<impresoras[0]->getContadorN()<<" - "<<temporal<< " = "<<impresoras[0]->getContadorN()-temporal<<" ]"<<endl;
    cout<<impresoras[1]->getModelo()<<" [ Impresiones B/N "<<impresoras[1]->getContadorN()<<" - "<<temporal2<< " = "<<impresoras[1]->getContadorN()-temporal2<<" ] [ Impresiones Color "<<impresoras[1]->getcontadorColor()<<" - "<<temporal2<< " = "<<impresoras[1]->getcontadorColor()-temporal3<<" ]"<<endl;
    int total =(impresoras[0]->getContadorN()-temporal)+(impresoras[1]->getContadorN()-temporal2);
    int totalc=(impresoras[1]->getcontadorColor()-temporal3);
    cout<<"TOTAL IMPRESIONES "<< "[ Impresiones B/N "<<impresoras[0]->getContadorN()-temporal<<" + "<<impresoras[1]->getContadorN()-temporal2<< " = "<< total <<" ]"<<endl;
    cout<<"TOTAL IMPRESIONES "<< "[ Impresiones Color "<<" + "<<impresoras[1]->getcontadorColor()-temporal3<< " = "<< totalc <<" ]"<<endl;
    cout<<"Costo de impresion   "<<" [ B/N :"<<costoBN<<" ]"<<" [ Color :"<<costoC<<" ]"<<endl;
    cout<<"COSTO IMPRESION: "<<" [ B/N : "<< total<<" * "<<costoBN<<" = "<<total*costoBN<<" ]"<<endl;
    cout<<"COSTO IMPRESION: "<<" [ Color : "<< totalc<<" * "<<costoC<<" = "<<totalc*costoC<<" ]"<<endl;
    float valor = (total*costoBN)+(totalc*costoC);
    cout<<" "<<endl;
    cout<<"El costo total del servicio para este mes es "<<"$ "<<valor<<" USD."<<endl;

}

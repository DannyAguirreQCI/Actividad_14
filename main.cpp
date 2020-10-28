#include <iostream>
#include "arreglo.h"
#include "computadora.h"
using namespace std;

int main()
{
    ArregloDinamico<Computadora> computadoras;
    Computadora c01("Windows", "16GB", "Lenovo", "1TB");
    Computadora c02("Ubuntu","6GB","Acer", "3TB");
    Computadora c03("Windows","8GB","HP","500GB");

    computadoras << c01 << c02<< c03;

    Computadora c04("Windows", "4GB", "Acer", "250GB");
    Computadora c05("Linux","32GB","Toshiba","2TB");

    Computadora *ptr = computadoras.buscar(c03);

    if(ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "No existe"<<endl;
    }

    Computadora *ptr1 = computadoras.buscar(c05);
    if(ptr1 != nullptr)
    {
        cout << *ptr1 << endl;
    }
    else
    {
        cout << "No existe"<<endl<<endl;
    }

    cout<<endl;

    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c04);

    if (ptrs.size() > 0)
    {
        for(size_t i=0; i < ptrs.size(); i++)
        {
            Computadora *c = ptrs[i];
            cout<<*c<<endl;
        }
    }
    else
    {
        cout<<"No existen coincidencias"<<endl;
    }

}


    /* Actividad 13-ejemplo video 14
    ArregloDinamico<string> arreglo;
    // agregar 4 string's a arreglo usando insertar_final e insersar_inicio()
    arreglo.insertar_final("Dissidia");
    arreglo.insertar_final("Final");
    arreglo.insertar_inicio("Fantasy");
    arreglo.insertar_inicio("Opera");
    // mostrar() los elementos de arreglo
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    // insertar() el elemento en la posición 2
    arreglo.insertar("100",2);
    // mostrar los elementos de arreglo
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    // eliminar_inicio() y eliminar_final()
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    // eliminar() el elemento de la posición 1
    arreglo.eliminar(1);
    // mostrar() los elementos de arreglo
    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    string *s = arreglo.buscar("Fantasy");
    *s = "Brave";
    cout<<endl<<s<<" "<<*s<<endl;
    return 0;*/

        /*Ejemplo video 13
    for(int i = 0; i < 10; i++)
    {
        arreglo.insertar_final(i);
    }*/

    /*Codigo Actividad 12
    ArregloDinamico arreglo;
    arreglo.insertar_final("Danny");
    arreglo.insertar_final("Aguirre");
    arreglo.insertar_final("Vazquez");
    arreglo.insertar_final("Dissidia");
    arreglo.insertar_final("Final");
    arreglo.insertar_final("Fantasy");
    arreglo.insertar_final("Opera");
    arreglo.insertar_final("Omnia");
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    arreglo.insertar_inicio("Brave");
    arreglo.insertar_inicio("Exvius");
    for (size_t i=0; i<arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }*/
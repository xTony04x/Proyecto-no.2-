#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
using namespace System;
using namespace std;

struct nodo
{
    string dato;
    nodo* next;
};
void insertarlista(nodo *&, string);
int main()
{
    string n;
    int num,menu,fila;
    int fila1 = 1, fila2 = 2 , fila3 = 3, fila4 = 4;
    nodo* lista = NULL;

    cout << "MENU: \n (1)-Ingresar Producto. \n (2)-Sacar Producto \n (3)-Salir \n"; cin >> menu;

        switch(menu)
        {
        case 1:
            cout << "\n En que columna desea ingresar los productos? \n (1)(2)(3)(4)"; cin >> fila;
            if (fila == fila1) {
                cout << "Ingrese el numero de productos que desea ingresar: "; cin >> num;

                for (size_t i = 0; i < num; i++)
                {
                    cout << "Ingrese un texto: "; cin >> n;
                    insertarlista(lista, n);
                }
            }
            else if (fila == fila2) {

            }
            else if (fila == fila3) {

            }
            else if (fila == fila4) {

            }
            else
            {
                cout << "Esta fila no esta registrada";
            }
            
            break;
        case 2:
           
            break;
        case 3:
            break;
        default:
            break;
        }
   
}
void insertarlista(nodo*& lista, string n) {
    nodo* newnodo = new nodo();
    newnodo->dato = n;

    nodo *aux1 = lista;
    nodo* aux2;
   
    while (aux1 != NULL && aux1->dato < n)
    {
        aux2 = aux1;
        aux1 = aux1->next;
    }
    if (lista == aux1) {
        lista = newnodo;
    }
    else
    {
        aux2->next = newnodo;
    }
    newnodo->next = aux1;
}
void mostrarlista(nodo*& lista, string n) {

}
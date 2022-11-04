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
    nodo* lista = NULL;
    cout << "ingrese un texto: "; cin >> n;
    insertarlista(lista, n);

}
void insertarlista(nodo*& lista, string n) {
    nodo* newnodo = new nodo();
    newnodo->dato = n;

    nodo *aux1 = lista;
    nodo* aux2;
    
    newnodo->next = aux1;
}
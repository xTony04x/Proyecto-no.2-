#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace System;
using namespace std;
// IDEAS: USAR CADENAS, VER VIDEOS PARA PODER APLICAR METODOS DE BUSQUEDA EN UN ALISTA (PROGRA A TS)
//USAR CLASES PARA PODER GUARDAR LOS DATOS EN UNA CADENA, CREAR LAS LISTAS DE LOS DEMAS 
// INVESTIGAR SOBRE UNA FORMA MAS FACIL DE USAR LISTAS DOBLEMENTE ENLA.




//listas - cada lista representa una columna
struct nodo1//A1,B1,C1
{
    string dato;
    nodo1* next;  
};
struct pila
{
    const int maximo_pila = 5;
};
struct nodo2//A2,B2,C2
{
    string dato;
    nodo2* next;
};
struct nodo3//A3,B3,C3
{
    string dato;
    nodo3* next;
};
struct nodo4//A4,B4,C4
{
    string dato;
    nodo4* next;
};
void insertarlista(nodo1*&, string[]);// FILA 1

void insertarlista2(nodo2*&, string);// FILA 2

void insertarlista3(nodo3*&, string);// FILA 3

void insertarlista4(nodo4*&, string);// FILA 4

void buscarlista(nodo1*, string);

void inventario1(nodo1*);

//MAIN - SE EJECUTARA TODO EL CODIGO
int main()
{
    
    int peso, fecha, cantidad;
    string n,n1,personaingreso;

    string info[1];

     info[1] = n, cantidad, peso;

    int num,menu,fila;
    int fila1 = 1, fila2 = 2 , fila3 = 3, fila4 = 4;
    nodo1* lista = NULL;
    nodo2* lista2 = NULL;
    nodo3* lista3 = NULL;
    nodo4* lista4 = NULL;
    
inicio1:
    
    cout << "\nBodegas Inteligentes de Guatemala S.A. \n MENU : \n (1)-Almacenar Producto. \n (2)-Retirar Producto \n (3)-Mostrar productos \n "; cin >> menu;

        switch(menu)
        {
        case 1:
          
            cout << "\n En que columna desea ingresar los productos? \n (1)(2)(3)(4)\n"; cin >> fila;
            if (fila == fila1) {
                system("CLS");

                    cout << "Ingrese un producto: "; cin >> n;
                    cout << "Ingrese el peso del producto: "; cin >> peso;
                    cout << "Ingrese la cantidad: "; cin >> cantidad;
                    cout << "Ingrese la fecha de ingreso: "; cin >> fecha;
                    cout << "¿Quien lo ingreso?: "; cin >>personaingreso ;
                    insertarlista(lista, info);
                
              
                goto inicio1;
            }
            else if (fila == fila2) {
                system("CLS");
                cout << "Ingrese el numero de productos que desea ingresar (MAX 3 productos por columna): "; cin >> num;

                for (size_t i = 0; i < num; i++)
                {
                    cout << "Ingrese un texto: "; cin >> n;
                    insertarlista2(lista2, n);
                }
                
                goto inicio1;
            }
            else if (fila == fila3) {
                system("CLS");
                cout << "Ingrese el numero de productos que desea ingresar (MAX 3 productos por columna): "; cin >> num;

                for (size_t i = 0; i < num; i++)
                {
                    cout << "Ingrese un texto: "; cin >> n;
                    insertarlista3(lista3, n);
                }
                
                goto inicio1;
            }
            else if (fila == fila4) {
                system("CLS");
                cout << "Ingrese el numero de productos que desea ingresar (MAX 3 productos por columna): "; cin >> num;

                for (size_t i = 0; i < num; i++)
                {
                    cout << "Ingrese un texto: "; cin >> n;
                    insertarlista4(lista4, n);
                }

                
            }
            else
            {
                cout << "Esta columna no esta registrada";
            }
            goto inicio1;
            
            break;
        case 2:
            system("CLS");
            cout << "Ingrese el producto que desea buscar: "; cin >> n1;
            buscarlista(lista, n1);
            
            goto inicio1;
           
            break;
        case 3:
            system("CLS");
            inventario1(lista);
            goto inicio1;
            break;
        default:
            break;
        }
   
}
void insertarlista(nodo1*& lista, string info[]) {
    nodo1* newnodo = new nodo1();
    newnodo->dato = info[1];

    nodo1 *aux1 = lista;
    nodo1* aux2;
   
    while (aux1 != NULL)
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

//----------------arreglar----------------------------------------------------------------------
void buscarlista(nodo1 *lista, string n1) {
    bool band = false;
    nodo1* actual = new nodo1();
    actual = lista;
  
    while (band != true)
    {
        if (actual->dato == n1) {
            band = true;
        }
        else
        {

            actual = actual->next;
        }
        
    }
  
    if (band == true) {
        cout << "\n se encontro el siguiente producto: " << n1 << "\n";
    }
    else
    {
        cout << "\nno esta registrado\n";
    }
}
// ---------------------------------------------------------------------------------------------
void inventario1(nodo1* lista1)
{
    nodo1* actual = new nodo1();

    actual = lista1;
    while (actual != NULL)
    {
        cout << "Producto: " << actual->dato << "\n";
        actual = actual->next;
    }
}

void insertarlista2(nodo2*& lista, string n) {
    nodo2* newnodo = new nodo2();
    newnodo->dato = n;

    nodo2* aux1 = lista;
    nodo2* aux2;

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


void insertarlista3(nodo3*& lista, string n) {
    nodo3* newnodo = new nodo3();
    newnodo->dato = n;

    nodo3* aux1 = lista;
    nodo3* aux2;

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


void insertarlista4(nodo4*& lista, string n) {
    nodo4* newnodo = new nodo4();
    newnodo->dato = n;

    nodo4* aux1 = lista;
    nodo4* aux2;

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
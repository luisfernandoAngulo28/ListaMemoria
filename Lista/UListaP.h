//---------------------------------------------------------------------------

#ifndef UListaPH
#define UListaPH
//---------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

 struct NodoL{
  int elemento;
  NodoL* sig;
 };
 typedef NodoL* direccionP;

 class ListaP{
   //Atributos
 private:
	direccionP PtrElementos;
	int longit;
 //Métodos
 public:
	ListaP();
	direccionP fin();
	direccionP primero();
	direccionP siguiente(direccionP d);
	direccionP anterior( direccionP d);
	bool vacia();
	int recupera(direccionP d);
	int longitud();
	void inserta( direccionP d, int elem);
	void inserta_primero(int elem);
	void inserta_ultimo(int elem);
	void suprime( direccionP d);
	void modifica( direccionP d, int elem) ;
	string to_str();
 };

#endif

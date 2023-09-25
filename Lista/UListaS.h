//---------------------------------------------------------------------------

#ifndef UListaSH
#define UListaSH
//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include "CSMemoria.h"
using namespace std;


 const string datoNL="elemento,sig";
 const string elemNL="->elemento";
 const string sigNL="->sig";

 class ListaS{
   //Atributos
 private:
	int PtrElementos;
	int longit;
	CSMemoria* mem;
 //Métodos
 public:
	ListaS();
	ListaS(	CSMemoria* m);
	int fin();
	int primero();
	int siguiente(int d);
	int anterior( int d);
	bool vacia();
	int recupera(int d);
	int longitud();
	void inserta( int d, int elem);
	void inserta_primero(int elem);
	void inserta_ultimo(int elem);
	void suprime( int d);
	void modifica( int d, int elem) ;
	string to_str();
 };
#endif

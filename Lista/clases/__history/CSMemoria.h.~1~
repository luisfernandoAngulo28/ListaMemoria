//---------------------------------------------------------------------------
 ///Aqui Van la Lista de Metodos
// y la clase
#ifndef CSMemoriaH
#define CSMemoriaH
//---------------------------------------------------------------------------
#include <iostream>
#include<string>
using namespace std;
typedef int direccion_mem;
const int MAX_MEMORIA=11;
const int NULO=-1;

 struct NodoM{
	int dato;
	string id;
	direccion_mem link;
	 /*|Dato| id | link|
						 */
};

class CSMemoria{
	private:

		NodoM* mem;
		direccion_mem libre;
	public:
		CSMemoria(); //Constructor
		direccion_mem new_espacio(string cadena);
		void delete_espacio(direccion_mem dir);
		void poner_dato(direccion_mem dir, string id, int valor);
		int obtenerDato(direccion_mem dir,string id);
		int Espacio_disponible();
		int Espacio_ocupado();
		bool dir_libre(direccion_mem dir);
		void mostrar_memoria();
};

#endif

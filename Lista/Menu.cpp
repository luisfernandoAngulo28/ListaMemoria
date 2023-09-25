#include <iostream>
#include <string>
#include "UListaP.h"
#include "UListaS.h"
#include "CSMemoria.h"
using namespace std;
 
void menuS();
int main(){
	/*ListaP* list;
	list=new ListaP();
	list->inserta_primero(10);
	list->inserta_ultimo(20);
	list->inserta_ultimo(30);
 	cout<<list->to_str()<<endl;
								 */

	ListaS* l1;
	menuS();
	//CSMemoria* mem=new CSMemoria();
	//list=new ListaS(mem);  */


system("pause");
return 0;
}

void menuS(){
   ListaS* list;
	CSMemoria* mem;
	int opcion;
	do {
		cout << "1.Crear Memoria\n";
		cout << "2.Pedir espacio\n";
		cout << "3.Crear Lista\n";
		cout << "4.Mostrar memoria\n";
		cout << "5.Mostrar lista\n";
		cout << "6.INSERTAR DIR PRIMERO \n L.INSERTAR(L,PRIMERO,DATO)\n";
		cout << "7.INSERTAR DIR FIN";
		cout << "8.INSERTAR SIGUIENTE DIR PRIMERO\n L.INSERTAR(L,SIGUIENTE,DATO)\n";
		cout << "9.ELIMINAR ANTERIOR FIN\n";
		cout << "10.Salir\n";
		cout << "Opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
				mem = new CSMemoria();
			} break;
		case 2: {
				string ids;
				cin.ignore();
				cout << "IDS a guardar: ";
				getline(cin, ids);
				mem->new_espacio(ids);
			} break;
		case 3: {
				/*int dir;
				cout << "Direccion a liberar\n";
				cin >> dir;
				mem->delete_espacio(dir); */
				list = new ListaS(mem);
			} break;
		case 4: {
				mem->mostrar_memoria();
			} break;
		case 5: {

				cout << list->to_str() << endl;
			} break;
		case 6: {

					int e;
				cout << "Dato: ";
				cin >> e;
				list->inserta_primero(e);

			} break;
		case 7: {
				int e;
				cout << "Dato: ";
				cin >> e;
				list->inserta_ultimo(e);
				//mem->mostrar_memoria();
			} break;
		case 8: {
				cout << list->to_str() << endl;
			} break;
		}
		system("pause");
		system("cls");
	}
	while (opcion != 10);

}



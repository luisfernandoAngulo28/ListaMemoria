//---------------------------------------------------------------------------

#pragma hdrstop

#include "CSMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iomanip>

CSMemoria::CSMemoria(){
   mem=new NodoM[MAX_MEMORIA];
   for(int i=0;i<MAX_MEMORIA;i++ ){
	  mem[i].dato=0;
	  mem[i].link=i+1;
   }
	mem[MAX_MEMORIA-1].link=-1;
	libre=0;
}

int Numero_lds(string cadena){
	int cont=0;
	for (int i = 0; i < cadena.length(); i++) {
		if (cadena[i]==',') {
			cont++;
		}
	}

	cont += (cadena.empty()?0:1);
	return cont;
}
string Obtener_id(string cadena,int n){
	string palabra = "";
	int contador = 0;
	int i = 0;
	while(contador<n-1 && i<cadena.length()-1){
		if(cadena.at(i)==','){
			contador+=1;
			cadena = cadena.substr(i+1,cadena.length()-(cadena.substr(0,i).length()));
			i=-1;
		}
		i+=1;
	}
	i=0;
	while(cadena[i]!=',' && i<cadena.length()){
			i+=1;
	}
	palabra = cadena.substr(0,i);

	return palabra;
}


							   //cadena="juan,perez"
direccion_mem CSMemoria::new_espacio (string cadena){
 int cant=Numero_lds(cadena);   //2
 int dir=libre;//0
 int d=libre;//0
	for (int i = 1; i <=cant-1; i++) {
		 mem[d].id=Obtener_id(cadena,i);
		 /*cout<<"|"<<setw(3)<<d<<"|"<<setw(4)<<
			mem[d].dato<<"|"<<setw(8)<<mem[d].id<<
			"|"<<setw(4)<<mem[d].link<<"|\n";  */
			d=mem[d].link; //1;

	}
	libre=mem[d].link;
	mem[d].link=-1;
	mem[d].id=Obtener_id(cadena,cant); //Perez
   /*  cout<<"|"<<setw(3)<<d<<"|"<<setw(4)<<
			mem[d].dato<<"|"<<setw(8)<<mem[d].id<<
			"|"<<setw(4)<<mem[d].link<<"|\n";     */
	return dir;
}
void eliminarFlecha(string &cadena){
	int index = 0;
	if(cadena!=""){
		while (cadena[index]!='-' && cadena[index+1]!='>'){
			index+=1;
		}
	cadena = cadena.substr(index+2,cadena.length()-(cadena.substr(0,index+1).length()));
	}
}


						  //(2               ,"->40253",      100)
void CSMemoria::poner_dato(direccion_mem dir, string id, int valor){
  int z=dir;//2
   eliminarFlecha(id);
   while(z!=NULO){
	  if(mem[z].id==id){  //40253== 40253

		 mem[z].dato=valor;
	  }
	  z=mem[z].link;
   }
			} /*
			  La y es: 2
			+----------------------+
			|DIR|DATO|---ID---|LINK|
			|  0|   0|    juan|   1|
			|  1|   0|   Perez|  -1|
			|  2| 100|   40253|  -1|
			|  3|   0|  INF220|   4|
			|  4|   0|      SA|  -1|
libre=5		|  5|   0|        |   6|
			|  6|   0|        |   7|
			|  7|   0|        |   8|
			|  8|   0|        |   9|
			|  9|   0|        |  10|
			| 10|   0|        |  -1|
			+----------------------+  */			      //2
 void CSMemoria::delete_espacio(direccion_mem dir){
	int x=dir;//2
	while(mem[x].link!=-1){

	  x= mem[x].link;
	}
	mem[x].link=libre;
	libre=dir;//2
	cout<<"mem[x].link= "<<mem[x].link<<" libre="<<dir<<endl;
 }

















void CSMemoria::mostrar_memoria(){
	cout<<"+";
	for(int i=2;i<=3+4+8+3+5; i=i+1){
		cout<<"-";
	};
	cout<<"+"<<"\n";
	cout<<"|DIR|"<<"DATO|"<<"---ID---|"<<"LINK|\n";
	for (int i = 0; i<MAX_MEMORIA; i = i+1){
		cout<<"|"<<setw(3)<<i<<"|"<<setw(4)<<
			mem[i].dato<<"|"<<setw(8)<<mem[i].id<<
			"|"<<setw(4)<<mem[i].link<<"|\n";
	};
	cout<<"+";
	for(int i=2;i<=2+4+8+4+5; i=i+1){
		cout<<"-";
	};
	cout<<"+\n";
	cout<<"LIBRE:"<<libre<<"\n";
	//cout<<"ESPACIO DISPONIBLE:"<<Espacio_disponible()<<"\n";
   //	cout<<"ESPACIO OCUPADO:"<<Espacio_ocupado()<<"\n";

}
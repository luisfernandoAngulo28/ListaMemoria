//---------------------------------------------------------------------------

#pragma hdrstop

#include "UListaP.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
ListaP::ListaP(){
  PtrElementos=NULL;
  longit=0;
}





direccionP ListaP::fin(){
 if(vacia()){
	cout<<"ERROR/FIN():Lista Vacia";
 }else{

 direccionP x = PtrElementos;
 direccionP ptrfin;
	while(x!=NULL){
		ptrfin= x;
		x = x->sig; // con simulador m.obtener_dato(x,’->sig’)
	}
	return ptrfin;

 }


}
direccionP ListaP::primero(){
  if(!vacia()){
	return PtrElementos;
  }else{
	cout<<"ERROR/Primero():Lista Vacia";
  }
}





direccionP ListaP::siguiente(direccionP d){
	if(vacia){
		cout<<"ERROR/Siguiente():Lista Vacia";
	}else{
		if(d==fin()){
		   cout<<"ERROR/ Dirrecion Erronea";
		}
		return d->sig;
	}

}












direccionP ListaP::anterior( direccionP d){
  if(vacia()){
	 cout<<"ERROR/Anterior:Lista Vacia";
  }else{
	direccionP x= PtrElementos;
	direccionP ant=NULL;
	while(x!=NULL){
		 if(x==d){
		  return ant;
		 }
		 ant=x;
		 x=x->sig;
	}
	 return NULL;
  }
}














bool ListaP::vacia(){
return longit==0;
}
 /*si vacia() entonces // llamar a exception ListaVacia
 caso contrario retornar pelemento */
int ListaP::recupera(direccionP d){
  if(vacia()){
	 cout<<"ERROR/recuperar:Lista Vacia";
  }else{
	  return d->elemento;
  }
}
int ListaP::longitud(){
	return longit;
}


/*
Inicio // x tendria dirección de memoria si existe espacio
x= new Nodo // con simulador M.New_espacio(‘elemento,sig’)
si x <> nulo entonces
 inicio
 xelemento = E // con simulador m.poner_dato(x,’->elemento’,E)
 xsig = Nulo // m.poner_dato(x,’->sig’,Nulo)
 si vacia() entonces PtrElementos= x , longitud = 1
 caso contrario inicio
 longitude=longitude +1
 si P=primero() entonces xsig = p // con simulador m.poner_dato(x,’->sig’,p)
 PtrElementos= x
 caso contrario
 ant = anterior(p) ,
 antsig=x //con simulador m.poner_dato(ant, ’->sig’,x)
 xsig=p //con simulador m.poner_dato(x, ’->sig’,p)
 fin
 fin
 caso contrario // llamar a exception existeespaciomemoria*/



void ListaP::inserta(direccionP d, int elem){
  NodoL* x=new NodoL;
  if(x!=NULL){
	x->elemento=elem;
	x->sig=NULL;
	if(vacia()){ //caso1 lista vacia
		PtrElementos=x;
		longit=1;
	}else{
	   if( d==primero()){ //caso 2 inserta de primero
		  x->sig=d;
		  PtrElementos=x;
	   }else{    //caso 3 a la izq de la direccion
		 direccionP ant=anterior(d);
		 ant->sig=x;
		 x->sig=d;
	   }

    }
  }

}
 /*x= New Nodo
si x <> nulo entonces
 inicio
 xelemento=E // con simulador m.poner_dato(x,’->elemento’,E)
 xsig = PtrElementos // con simulador m.poner_dato(x,’->sig’,PtrElementos)
 longitud=longitud + 1
 PtrElementos = x
 fin
 caso contrario // llamar*/


void ListaP::inserta_primero(int elem){
  NodoL* x=new NodoL;
  if(x!=NULL){
   x->elemento=elem;
   x->sig=PtrElementos;
   PtrElementos=x;
   longit++;

  }

}
/*Inicio // x tendria direcion de memoria si existe espacio
x= New Nodo // con simulador New_espacio(‘elemento,sig’)
si x <> nulo entonces
 inicio
 xelemento = E // con simulador m.poner_dato(x,’->elemento’,E)
 xsig = Null // con simulador m.poner_dato(x,’->sig’,Null)
 si longitud <>0 entonces
 fin()sig = x // con simulador m.poner_dato( fin() ,’->sig’,x)
 caso contrario

 Ptrelementos=x
 longitud=longitud + 1
 fin
 caso contrario // llamar a exception existeespaciomemoria*/
void ListaP::inserta_ultimo(int elem){
  NodoL* x = new NodoL;
	if (x != NULL) {
		x->elemento = elem;
		x->sig = NULL;
		if (vacia())
			PtrElementos = x;
		else
			fin()->sig = x;
		longit++;

  } else{
	  cout<<"ERROR:No existe espacio en la memoria\n";
  }

}



/*Inicio
 si longitud = 0 entonces // llamar a exception listavacia
 si p=ptrelementos entonces // es el primer nodo
 inicio
 x=ptrelementos
 ptrelementos=ptrelementossig // con simulador M.obtener_dato(ptrelementos, ’->sig’)
 delete x // con simulador m.delete_espacio(x)
 fin
 caso contrario
 inicio
 ant = anterior(p)
 antsig = siguiente(p) // con simulador poner_dato(ant, ’->sig’,siguiente(p))
 delete p // con simulador m.delete_espacio(p)
 fin
 longitud=longitud -1
fin */

void ListaP::suprime( direccionP d){
   if(longit==0){
	cout<<"ERROR:LISTA VACIA";
	return;
   }else{
	  if(d==PtrElementos){ //si es el primer elemento
		direccionP x=PtrElementos;
		PtrElementos=PtrElementos->sig;
		delete(d);
	  }else{
		  direccionP ant=anterior(d);
		 ant->sig=siguiente(d);
		 delete(d);
      }
   }
   longit--;

}
void ListaP::modifica( direccionP d, int elem) {
if(vacia){
   cout<<"ERROR LISTA VACIA\n";
 }else{
	 d->elemento=elem;
 }
}
string ListaP::to_str(){
string s="<";
direccionP aux=PtrElementos;
	while(aux!=NULL){
		int elemento=aux->elemento;
		s=s+to_string(elemento);
		aux=aux->sig;
		if(aux!=NULL){
		s=s+",";
	}

}
return s+">";

}

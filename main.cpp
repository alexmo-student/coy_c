#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"Favor De Ingresar Tu Nit:";
	cin>>nit;
	cout<<"Favor DE Ingresar Tu Primer Nombre:";
	cin>>nombres;
	cout<<"Favor De Ingresar Tu Apellido:";
	cin>>apellidos;
	cout<<"Favor De Ingresar Tu Direccion:";
	cin>>direccion;
	cout<<"Favor De Ingresar Numero De Telefono:";
	cin>>telefono;
	// instancia de un objeto 
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<""<<endl;
	cout<<"Ingrese Tu Nit Nuevamente Para Modificar:";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();
	
}

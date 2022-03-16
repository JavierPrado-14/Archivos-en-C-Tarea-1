#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	
	fstream archivo("regristro.txt");
	string nombre, apellido, direccion;
	int telefono, codigo, op, op2;
	
	do{
		cout<<"1.-Nuevo Regristro\n2.-Salir";
		cin>>op;
		cin.ignore();
		
		if(op==1){
			if(!archivo.is_open()){
				archivo.open("regristro.txt", ios::out);
			}
			cout<<"Nombres: ";
			getline(cin,nombre);
			cout<<"Apellidos: ";
			getline(cin,apellido);
			cout<<"Direccion: ";
			getline(cin,direccion);
			cout<<"Telefono: ";
			cin>>telefono;
			cout<<"Codigo: ";
			cin>>codigo;
			
			cout<<"1.-Guardar Datos\n2.-Regresar\n";
			cin>>op2;
			
			if(op==1){
				archivo<<"Nombres: "<<nombre<<endl;
				archivo<<"Apellidos: "<<apellido<<endl;
				archivo<<"Direccion: "<<direccion<<endl;
				archivo<<"Telefono: "<<telefono<<endl;
				archivo<<"Codigo: "<<codigo<<endl;
				
			system("cls");	
			
			cout<<"Regristro Guardado con Exito...\n";
			system("pause");
			system("cls");
					
			}
			archivo.close();		
		}
	}while(op != 2);
	
	return 0;
}

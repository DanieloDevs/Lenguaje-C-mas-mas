//login en c++

 ***********************************************************
 *Error dentro de la comprobación de usuario		   *
 *no verifica si es o no el verdadero usuario y contraeña  *
 ***********************************************************



//introducimos librerias
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
//Definimos las variables
#define User "danielo"
#define Pass "1234"
#define Enter 13
#define Backspace 8
using namespace std; //colocamos el using para utilizar los datos que estan dentro de las librerias

int main(){
	string usuario,password;
	int contador=0;
	bool ingresa = false;
	do{
		system("cls");
		cout<<"***************************************************************"<<endl;
		cout<<"***************************************************************"<<endl;
		cout<<"\t\t\t                    Logueate"<<endl;
		cout<<"\t\t\t          _____________________________"<<endl;
		cout<<"\t\t                      Usuario: "<<endl;
		getline(cin,usuario);
		cout<<"\t\t\t          _____________________________"<<endl;
		cout<<"\t\t                     Password: "<<endl;
		getline(cin,password);
		char caracter;
		caracter=getch();
		password="";
		while(caracter!=Enter){
			if(caracter!=Backspace){
			password.push_back(caracter);
			cout<<"*";
			}else{
				if(password.length()<0){
					cout<<"\b\b";
					password=password.substr(0,password.length()-1);
				}
			}caracter=getch();
			
		}
		if( usuario==User && password==Pass ){
		ingresa = true;
		}else{
			cout<<"\n\n\n el usuario y/o contraseña son incorrectos"<<endl;
			cin.get();
			contador++;
		}
		
	}while(ingresa==false&&contador<3);
	if(ingresa==false){
		cout<<"\n\t usted no pudo ingresar al sistemas"<<endl;
	}else{
		cout<<"Bienvenido al sistemas"<<endl;
	}
	cin.get();
	return 0;
}

















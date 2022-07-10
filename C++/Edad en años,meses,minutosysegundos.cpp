// Este Programa te pedira tu año de nacimiento descrita por cuatro digitos, una vez ingresada te regresara tu edad en: (años, meses, dias, horas, minutos y segundos
//introducimos nuestra libreria
#include "iostream"
using namespace std;
int tope = 2022;
int mes = 12, dia = 365, hora = 24, minuto = 60, segundo = 60;
//introducimos nuestra funcion principal
int main(){
	int edad,years,meses,dias,horas,minutos,segundos; //agregamos nuestras variables
	cout<<"ingresa tu fecha de nacimiento en 4 digitos: "<<endl;
	cin>>edad;
	
	years=tope-edad;
	
	cout<<"tu edad es: "<<years<<endl;
	meses=years*mes;
	cout<<"tu edad en meses es: "<<meses<<endl;
	dias=years*mes;
	dias=years*dia;
	cout<<"tu edad en dias es: "<<dias<<endl;
	horas=dias*hora;
	cout<<"tu edad en horas es: "<<horas<<endl;
	minutos=horas*hora;
	cout<<"tu edad en minutos es: "<<minutos<<endl;
	segundos = minutos*segundos;
	cout<<"tu edad en segundos es: "<<segundos<<endl;
	
	return 0;
cin.get(); //se utiliza para indicar que el programa se ha ejecutado de manera exitosa
}

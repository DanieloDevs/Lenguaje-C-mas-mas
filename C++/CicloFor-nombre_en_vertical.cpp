#include "iostream"
#include "string.h"
#include "conio.h" //introducimos las librerias
using namespace std; // introducimos el usign para utilizar todas la funciones de las librerias
int main (){
	string h ="Dante";
	for(int i=0; i<=5; i++){//depende de las letras del nombre que queramos que este en vertical debemos de poner el numero de las letras en este caso son 5 letras en el nombre
		cout<<h[i]<<endl;
		
	}
	cin.get();
	return 0;
}

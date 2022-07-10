#define suma (numero1 + numero2)
#define resta (numero1 - numero2)
#define multiplicacion (numero1 * numero2)
#define division (numero1 / numero2)
//Define --- nos permite crear macros con un identificador o nombre de la variable
#include "iostream" 
using namespace std; 
int numero1, numero2;
int main(){
	cout<<"introduce el primer numero para las operaciones"<<endl;
	cin>>numero1; //El "cin" guarda lo que escribimos por teclado
	cout<<"introduce el segundo numero para las operaciones"<<endl;
	cin>>numero2;
	
	
	cout<<"resultado de la suma"<<suma<<endl;
	cout<<"resultado de la resta"<<resta<<endl;
	cout<<"resultado de la multiplicacion"<<multiplicacion<<endl;
	cout<<"resultado de la division"<<division<<endl;
	
	
	return 0; // se utiliza para indicar que el programa se ha ejecutado de manera exitosamente
}

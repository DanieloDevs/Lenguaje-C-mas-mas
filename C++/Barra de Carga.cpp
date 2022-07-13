#include <windows.h>
#include <iostream>   
#include <stdio.h>
using namespace std;
 
int main()
{
	system("color 2");
    int segundos=5;
    for(int i=0; i<=21; i++)
        cout << "\n";
    cout << " \t\t\t\t\t\t\t CARGANDO...\n";
    for(int i=0; i<=119; i++)
        cout << "";
    for(int i=0; i<=119; i++)
    {
        cout<<char(219);
        Sleep(segundos*1000/80);
    }
    cout<<"\nCompletado!";
return 0;
 }

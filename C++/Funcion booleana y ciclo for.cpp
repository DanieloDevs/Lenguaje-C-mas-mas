#include "iostream"
using namespace std;
bool boleana;
int d,r;
int main(){
	
	for(int i=0; i<=1; i++){
	cout<<"ingresa un numero para evaluar"<<endl;
	cin>>d;
	cout<<"ingresa el segundo numero a evaluar"<<endl;
	cin>>r;
	
	boleana=d<r;
	
	if(boleana=0){	cout<<"el primer numero es superior al segundo"<<endl;}else{	cout<<"el primer numero es menor al segundo"<<endl; }
	
	}
	
	cin.get();
	return 0;
}

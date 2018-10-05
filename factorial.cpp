#include <iostream>
#include <conio.h>
/* Recursividad= es una t�cnica de programaci�n elemental que permite 
que una funci�n pueda llamarse asimismo desde la misma funci�n.
factorial (n) =1 , si n=0;
n*factorial (n-1), si n>0;
*/
using namespace std;

int factorial (int);//prototipo de la funcion recursiva

int main(int argc, char** argv) {
	int numero;
	cout<<"\n Dame un numero: ";
	cin>>numero;
	cout<<"\n Factorial= "<<factorial(numero)<<endl;
	return 0;
}

int factorial (int n){
	if(n==0) //caso base
	{
		n=1;
	}
	else	
	{
		n=n*factorial(n-1);//caso general
	}
	return n;
}

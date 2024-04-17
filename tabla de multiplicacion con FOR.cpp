#include <iostream>

using namespace std;

/*
el tipo de variable sera numerica entera
la variable sera numeroIngresado
realizar un ciclo que muestre la tabla de multiplicacion del numeroIngresado
mostrar en pantalla los resultados
*/
/// TABLA DE MULTIPLICACIÓN

int main (){

int numeroIngresado;
cout <<"Ingrese numero de la tabla de multiplicar que usted desee saber: ";
cin >>numeroIngresado;
cout <<"La tabla de multiplicar del "<<numeroIngresado<<" es: "<< "\n";

for (int i=0; i<=10; i++ ){

    numeroIngresado * i;

cout <<numeroIngresado<< "x" <<i<< "=" <<numeroIngresado * i<< "\n";
    }

return 0;
}

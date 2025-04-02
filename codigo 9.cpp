
//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
 n, suma = 0 : entero
preguntar (numero)
si (numero < 1) 
mostrar (error)
para (1 hasta numero salto 1){
     suma += i;

mostrar(suma)
fin
*/
#include <iostream>

using namespace std;

int main() {
 int n, suma = 0;
 cerr<< "Numero : ";
 cin>> n;
 
 if (n < 1){
     cout << "no sea burro";
 } else {
     
 }
 
 for (int i = 1; i <= n; i++){
     suma += i;
 }
 cout << "la suma es: " << suma << endl;
}

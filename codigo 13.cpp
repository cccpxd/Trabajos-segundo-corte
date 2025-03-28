//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
numero, suma = 0 : entero
preguntar (numero)
si (numero <10)
mostrar (error)

para (; numero > 0; numero /=10)
suma += n % 10

mostrar (suma)
fin
*/

#include <iostream>
using namespace std;
int main() {
int n, suma=0;
cerr << "ingrese el numero en Z: ";
cin >> n;
if (n<10){
    cout << "carepollita bruta";
    return 1;
}else {
}
for (; n > 0; n /=10){
    suma += n % 10;
    } 
     
cout << "la suma de los digitos es: "<< suma;
    return 0;
}


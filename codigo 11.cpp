//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
n, factorial = 1 : enteros
preguntar (numero)
si n (<= 0)
mostrar (error)
para (1 hasta numero salto 1){
     factorial *= i;

mostrar (resultado)
fin
*/


#include <iostream>

using namespace std;

int main() {
int n, factorial= 1;
cerr << "que numero bro: ";
cin>> n;
if (n <= 0){
    cout << "pendejito me saliste";
    return 1;
} else {
    
}


for (int i = 1; i <=n; i++){
     factorial *= i;
}
cout << "el factorial de "<< n << " es: "<<  factorial;
    return 0;
}

//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
numero, acumuladorx=0, acumuladory=1, sig : entero
preguntar(numero)
si (n <= 0)
mostrar(error)

mostrar (numero de fibonacci)
para (0 hasta n salto 1)
mostrar (x)
sig = x + y
x = y
y = sig

fin
*/
#include <iostream>
using namespace std;

int main() {
   int n, x=0, y=1, sig;
   cerr << "ingresa un numero: ";
   cin>> n; 
   
   if (n <= 0){
       cout << "pendejin";
       return 1;
   } else{
       
   }
   cout << "los numeros de fibonacci son: ";
   for (int i = 0;i <= n;i++ ){
       cout << x << endl;
       sig = x + y;
       x = y;
       y = sig;
   }
   return 0;
   
}

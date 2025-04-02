
//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
numero, digito, invertido = 0 : entero
preguntar(numero a invertir)
para (; n > 0;n /= 10)
 d = n % 10
 i = i * 10 + d
 mostrar (invertido)
fin
*/
#include <iostream>

using namespace std;

int main() {
 int n, d, i = 0;
 cerr << "dame el numero: ";
 cin >> n;
  for (; n > 0;n /= 10){
      d = n % 10;
      i = i * 10 + d;
      
      
  }
   cout <<i ;
  
 
}







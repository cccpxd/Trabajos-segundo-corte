
//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
num, m : entero
preguntar (numero)
para (int i = 1; i <= 10; i++)
 m = num * i
mostrar (tabla de multiplicar)
fin
*/
#include <iostream>

using namespace std;

 int main() {
  int num, m;
  cerr << "numero: ";
  cin >> num;
  for (int i = 1; i <= 10; i++){
      m = num * i;
      cout << num << " x "<< i << "=" << m << endl;
  }
  return 0;
}

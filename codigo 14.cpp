//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
numeor : entero
preguntar(numero)

si (numero <0)
mostrar (error)

para( i=0; i < n;i++))
si (i > 0)
mostrar (salto de linea)
para (j=0; j <= i;j++)
mostrar (*)
fin
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cerr << "cantidad de filas: ";
  cin>> n;
  
  if (n<0){
      cout << "pendejin";
      return 1;
  }else{
      
  }
 for (int i=0; i < n;i++){
     if (i > 0 ){
         cout << endl;
     }
       for (int j=0; j <= i;j++){
           cout << "*";
       }
 } 
 return 0;
}

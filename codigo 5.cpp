//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
menor = 0, mayor = 0 : entero
cantidad, numero, suma = 0: entero
preguntar(cantidad de numeros)
si (cantidad <= 0)
mostrar(error)
para (int i = 0;i < cantidad; i++)
preguntar (numero)
suma += numero
si (numero < 18) 
menor++
sino
mayor++
mostrar (mayor)
mostrar (menor)
mostrar (suma)



fin
*/
#include <iostream>

using namespace std;

 int main() {
  int menor = 0, mayor = 0;
  int cantidad, numero, suma = 0;
  cerr << "cuantos numeros quieres ingresar: ";
  cin >> cantidad;
  if (cantidad <= 0){
      cout << "no sea burro";
  } else {
      
  }
  
  for (int i = 0;i < cantidad; i++){
      cerr << "numero: ";
      cin >> numero;
      suma += numero;
     if (numero < 18){
         menor++;
         
     } else {
         mayor++;
     }
  }
     cout << mayor << endl;
     cout << menor << endl;
     cout << suma << endl;
 return 0;
}

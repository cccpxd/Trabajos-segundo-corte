//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
 positivo = 0, negativo = 0 : entero
 cero = 0, cantidad, numero: entero
preguntar (cantidad de numeros)
si (cantidad <= 0)
mostrar (error)
para i(0 hasta cantidad salto 1)
preguntar (numero)
si (numero > 0)
positivo ++
sino (numero < 0)
negativo ++
sino 
ceros

mostrar (positivo)
mostrar (negativo)
mostrar (ceros)
fin
*/

#include <iostream>

using namespace std;

 int main() {
  int positivo = 0, negativo = 0;
  int cero = 0, cantidad, numero;
  cerr << "cuantos numeros quieres ingresar: ";
  cin >> cantidad;
  if (cantidad <= 0){
      cout << "no sea burro";
  } else {
      
  }
  
  for (int i = 0;i < cantidad; i++){
      cerr << "numero: ";
      cin >> numero;
      if (numero > 0){
          positivo++;
      } else if (numero < 0){
          negativo++;
      } else {
          cero++;
      }
  }
 cout << positivo << endl;
 cout << negativo << endl;
 cout << cero << endl;
 return 0;
}

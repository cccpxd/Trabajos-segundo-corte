//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
suma, promedio, nota : real
preguntar (cantidad de numeros)
si (cantidad <= 0)
mostrar(error)
para i (0 hasta cantidad salto 1){
      mostrar( i + 1)
      preguntar (nota)
      suma += nota
promedio = suma / cantidad;
  mostrar (promedio)

fin
*/

#include <iostream>
using namespace std;
 int main() {
  int cantidad;
  float suma, promedio, nota;
  cerr << "cuantos numeros quieres ingresar: ";
  cin >> cantidad;
  if (cantidad <= 0){
      cout << "no sea burro";
  } else {
      
  }
  for (int i = 0;i < cantidad; i++){
      cout << i + 1;
      cerr << "nota: ";
      cin>> nota;
      suma += nota;
  }
  promedio = suma / cantidad;
  cout << promedio;
  return 0;

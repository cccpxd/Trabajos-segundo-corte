//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio

fin
*/
#include <iostream>
using namespace std;
int main() {
   string libreria [3];
   string autores [3];
    cerr << "ingrese 3 libros"<< endl;
for (int i = 0;i < 3;i++){
      cin>>libreria[i];
}
    cerr << "autor: ";
    for (int i = 0;i < 3;i++){
      cin>>autores[i];
        
    }
      for (int i = 0;i < 3;i++){
          cout << "tus libros son: "<< libreria[i]<<endl;
          cout << "su autor es: "<< autores[i]<<endl;
}
}
 

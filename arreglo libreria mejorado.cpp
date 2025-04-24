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
   cerr << "Libro " << i+1 << ": ";
        cin >> libreria[i];
        cerr << "Autor " << i+1 << ": ";
        cin >> autores[i];
    }
      for (int i = 0;i < 3;i++){
          cout << "tus libro es: "<< libreria[i]<<endl;
          cout << "su autor es: "<< autores[i]<<endl;
}
}
 
 

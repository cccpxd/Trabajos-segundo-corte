//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio

fin
*/
#include <iostream>
using namespace std;
int main() {
int edad;
    int edades [5];
     cerr << "ingrese 5 edades"<< endl;
for (int i = 0;i < 5;i++){
     cout << "ingrese edad de la persona "<< i+1<<": ";
      cin>>edades[i];
      
  }
   cerr <<"los menores son: "<< endl;
for (int i = 0;i < 5;i++){
     if (edades [i] < 18){
      cout << "la persona " << i + 1 << " tiene " << edades[i]<< " años "<< endl;
     }
      }
      cerr << "los mayores son: "<< endl;
      for (int i = 0;i < 5;i++){
     if (edades [i] >= 18){
      cout << "la persona " << i + 1 << " tiene " << " años: "<< edades[i]<< endl;
     }
      }
      
  
  

}

//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
n, c=0 : entero
preguntar(numero entero positivo)
si (numero <= 0)
mostrar (error)
para (; n > 0; n = n / 10)
c++

mostrar (cantidad de digitos)
fin
*/

#include <iostream>
using namespace std;
int main() {
int n, c =0;
cerr << "ingrese el numero en Z: ";
cin >> n;
if (n<=0){
    cout << "respeta bro";
    
}else {
}
for (; n > 0; n = n / 10){
    c++;
}
cout << "el numero tiene : " << c << " digito/s" << endl;

    return 0;
    
}

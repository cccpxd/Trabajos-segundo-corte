//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
numero, num, mayor : entero
preguntar(cantidad de numeros)
si (numero <= 0) 
mostrar(error)
preguntar(primer numero)
para i  (2 hasta numero salto 1)
preguntar (numero)
si (num > mayor) 
mayor = num;
mostrar(numero mayor)
fin
*/
#include <iostream>
using namespace std;
int main() {
    int numero, num, mayor;

    cerr << "cuanto numeros son ";
    cin >> numero;

    if (numero <= 0) {
        cout << "no sea burro" << endl;
        return 1; 
    } else {
}

    cerr << "Ingresa el primer numero: ";
    cin >> mayor;

    for (int i = 2; i <= numero; i++) {
        cerr << "Ingresa el número " << i << ": ";
        cin >> num;
        
        if (num > mayor) {
            mayor = num; 
        } else {
}
    }

    cout << "El número mayor es: " << mayor << endl;

    return 0;
}

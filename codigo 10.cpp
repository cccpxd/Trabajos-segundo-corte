//cristian Camilo Colorado Posada
//cccoloradop@correo.usbcali.edu.co
/* Pseudocodigo
inicio
a, b, divisores : entero
preguntar (numero a)
preguntar (numero b)
si (a >= b)
mostrar(a debe ser menor que b)

mostrar( Números primos en el rango )
para  ( i = a; i <= b; i++)
si (i>=2)
divisores = 0
para ( j = 1; j * j <= i; j++) 
si (i % j == 0)
divisores++
si (j != i / j) divisores ++


si (divisores ==2)
mostrar (i)
fin
*/


#include <iostream>

using namespace std;

int main() {
    int a, b, divisores;

    cerr << "Ingresa el valor de a : ";
    cin >> a;
    cerr << "Ingresa el valor de b : ";
    cin >> b;

    if (a >= b) {
        cout << " a debe ser menor que b." << endl;
        return 1;
    } else {
        
    }
    cout << "Números primos en el rango [" << a << ", " << b << "]:" << endl;

    for (int i = a; i <= b; i++) {
        if (i >= 2) {
        divisores = 0; 

        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                divisores++;
                if (j != i / j) divisores++; 
            }
        }

        
        if (divisores == 2) {
            cout << i << " "; 
        } else {
            
        }
       }
    }
    return 0;
}

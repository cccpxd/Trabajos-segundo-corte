

#include <iostream>

using namespace std;

int main() {
  int apt[2][3];
  int mayor;
  mayor = 0;
  
  int fMayor;
  int cMayor;
   cerr << "Ingrese los elementos de la matriz apt:" << endl;
   for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
            cout << "Elemento [" << f << "][" << c << "]: ";
            cin >> apt[f][c];
            
        }
    }
    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
            if (apt[f][c] > mayor) {
                mayor = apt[f][c];
                fMayor = f;
                cMayor = c;
            }
        }
    }
    cout << "El número mayor en la matriz es: " << mayor << endl;
    cout << "La posición del número mayor es: [" << fMayor << "][" << cMayor << "]" << endl;
}

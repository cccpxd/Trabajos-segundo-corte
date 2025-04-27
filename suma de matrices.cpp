#include <iostream>
using namespace std;

int main() {
  
   int apt[2][3];
   int xd[2][3];
   int resultado[2][3];
   
   cout << "Ingrese los elementos de la matriz apt:" << endl;
    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
            cout << "Elemento [" << f << "][" << c << "]: ";
            cin >> apt[f][c];
        }
    }
     for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++){
            cout << apt[f][c]<<"\t";
        } 
        cout << endl;
     }
    
    cout << "Ingrese los elementos de la matriz xd:" << endl;
    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
            cout << "Elemento [" << f << "][" << c << "]: ";
            cin >> xd[f][c];
        }
    }
    
    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++){
            cout << xd[f][c]<<"\t";
        } 
        cout << endl;
     }
    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
            resultado[f][c] = apt[f][c] + xd[f][c];
        }
    }
    cout << "el resultado es: " << endl;
    for (int f = 0; f < 2; f++) {
        for (int c = 0; c < 3; c++) {
           
            cout << resultado[f][c] << "\t";
        }
        cout << endl;
    }
    
}

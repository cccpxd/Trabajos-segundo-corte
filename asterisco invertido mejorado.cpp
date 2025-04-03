#include <iostream>

using namespace std;

int main() {
  
  int n; 
  cerr <<  "numero bro: ";
  cin>> n;
  if (n < 0){
      n *= -1;}
  for (int i = n;i > 0; i--){
       if (i > 0){
          cout << endl;
      } 
       for (int j = 0 ;j < i; j++){
           cout << "x";
       } 
       
  
  }
  
  
  
  return 0;
}

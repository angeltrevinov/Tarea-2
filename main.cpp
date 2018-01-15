/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 2 Fecha: 13 de Enero Materia: Diseño de Algoritmos
*/

#include <iostream>

using namespace std;

int BinarySearchTree(string &digitos, int min, int max){
  int unos = 0, ceros = 0;
  for(int i = 0; i<digitos.length(); i++){
    if(digitos[i] == '1')
      unos++;
    else if(digitos[i]== '0')
      ceros++;
  }

  return abs(unos-ceros);

}


int main(){

  int length, min = 0;
  string digitos;

  cin >> length;
  cin >> digitos;

  cout << BinarySearchTree(digitos, min, length) << endl;
  //cout << digitos << endl;

  return 0;
}

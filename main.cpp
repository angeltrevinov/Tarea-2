/*
  Angel Odiel Treviño Villanueva
  A01336559
  Tarea: 2 Fecha: 13 de Enero Materia: Diseño de Algoritmos
*/

#include <iostream>

using namespace std;

int BinarySearchTree(string &digitos, int min, int max){
  int med = (max - min) / 2;
  if(digitos.empty())
    return digitos.length();
  else if(digitos[med] != digitos[med+1] && med+1 <= digitos.length()-1 ){//si se encuentra una pareja a la derecha
    digitos.erase(med, 2);
    BinarySearchTree(digitos, min, digitos.length()-1);
  }else if(digitos[med] != digitos[med-1] && med-1 >= 0 ){//si se encuentra una pareja a la izquierda
      digitos.erase(med-1, 2);
      BinarySearchTree(digitos, min, digitos.length()-1);
  }
//si se tiene que mover a los lados
  if((bool)digitos.find("1") != (bool)digitos.find("0")){
    return digitos.length(); //salir si el string tiene los mismos digitos
  }else if(digitos[med] == digitos[med+1]){//por si no hay pareja a la derecha
    BinarySearchTree(digitos, med, digitos.length()-1);
  }else if(digitos[med] == digitos[med-1]){//por si no hay pareja a la izquierda (se sale del arreglo)
    BinarySearchTree(digitos, 0, med);
  }
  return digitos.length();
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

//Se trata de un puntero que va a apuntar a las funciones
//Se define de la siguiente forma:
// double (*a)  (int, int);

#include <iostream>
#include <iomanip>

using namespace std;


int suma(int x , int y){
  return x + y;
}

int multiplica(int x , int y){
  return x * y;
}

int main(){
  int a = 15 , b =  3, c;
  int (*ptFunc) (int,int);
  ptFunc = suma;
  c = ptFunc(a,b);
  cout << "Respuesta = "  << c << endl;

  ptFunc = multiplica;
  c = ptFunc(a,b);
  cout << "Respuesta = "  << c << endl;
  return 0;
}

#include <iostream>
using namespace std;
/*Escriba un programa en C++ que permita determinar la suma de los n primeros pares y los m primerosnúmero impares.Tanto n y m, son número enteros que deberán ser ingresados por el usuario y representan la cantidad denúmeros que desean operar.Ejemplo:Ingrese la cantidad de numeros pares a sumar: 4Ingrese la cantidad de numeros impares a sumar: 5Sumatoria de pares=2+4+6+8 = 20Sumatoria de impares=1+3+5+7+9= 25*/
int validaNumeroP(){
  int numP;
  do{
    cout<<"Ingresa la cantidad de numeros pares: "; cin>>numP;
  }while(numP<0);
  return numP;
}
int validaNumeroI(){
  int numI;
  do{
    cout<<"Ingresa la cantidad de numeros impares: "; cin>>numI;
  }while(numI<0);
  return numI;
}
int sumaPares(int n, int m){
  int sumaP=0; int sumaI=0;
  for (int i=0;i<=n*2;i++){
    if(i%2==0){
      sumaP=sumaP+i;
    }
  }
  cout<<"La suma de "<<n<<" numeros pares es de: "<< sumaP<<endl;
  for (int i=0;i<=m*2;i++){
    if(i%2!=0){
      sumaI=sumaI+i;
    }
  }
  cout<<"La suma de "<<m<<" numeros pares es de: "<< sumaI<<endl;

}

int main() {
  int numP = validaNumeroP();
  int numI = validaNumeroI();

  sumaPares(numP,numI);


}
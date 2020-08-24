#include <iostream>
#define TAM 100
using namespace std;


void llenarVector(int tvec,int vec[]){

for(int i=0;i<tvec;i++)
{
    cin>>vec[i];
}
}
void mostrarVector(int tvec,int vec[]){

for(int i=0;i<tvec;i++)
{
   cout<<vec[i]<<" ";
}
cout<<endl;
}

void buscarVector(int tvec1,int vectorBuscado[],int tvec2,int vectorDeBusqueda[]){
int posHallado;
int j,i;
int contador=0,iter1=0,iter2=0;
for( iter1=0;iter1<tvec2;iter1++)
{

i=iter1;
j=0;
iter2=0;

while(iter2<tvec1){
//cout<<"v2 "<<i<<" : "<<vectorDeBusqueda[i]<<" / "<<"v1 "<<j<<": "<<vectorBuscado[j]<<endl;
if(vectorDeBusqueda[i]==vectorBuscado[j]){
contador++;
//cout<<contador<<endl;
i++;
j++;
    if(contador==tvec1)
    {
        posHallado=iter1;
        cout<<"hallado en la posicion "<<posHallado+1<<endl;
        break;
    }

}
else
{
contador=0;
break;
}

iter2 ++;


}








}

}

float calcularPromedio(int tvec, int vectorX[])
{
int suma=0;
int promedio;

for(int i = 0;i<tvec ; i++)
  {
    suma=vectorX[i]+suma;
  }
  promedio = suma/tvec;
  return promedio;

}

int hallarMayor(int tvec,int unVector[])
{
    int mayor=0,posMayor;
for(int i = 0;i<tvec;i++)
{
    if(i==0){
        mayor=unVector[i];
         posMayor=i+1;
        //cout<<"mayor "<<i+1<<" : "<<mayor<<endl;
        }


if(unVector[i]>mayor){
    mayor=unVector[i];
    posMayor=i+1;
     //cout<<"mayor "<<i+1<<" : "<<mayor<<endl;
}


}
return posMayor;
}


int main()
{

    //EJERCICIO 11

    /*
    int v1[TAM];
    int v2[TAM];
    int tvec1,tvec2;
      cout << "Tamaño de v1: "; cin>>tvec1;
       cout << "Tamaño de v2: "; cin>>tvec2;
       if(tvec2<tvec1){
        cout<<"v2 debe ser mayor que v1, ingrese un mayor tamaño "; cin>>tvec2;
       }
cout<<"ingrese los valores del primer vector"<<endl;
llenarVector(tvec1,v1);
cout<<"ingrese los vgalores del segundo vector"<<endl;
llenarVector(tvec2,v2);

cout<<"v1: ";
mostrarVector(tvec1,v1);

cout<<"v2: ";
mostrarVector(tvec2,v2);

cout<<"buscando el vector 1 en el 2 "<<endl;
buscarVector(tvec1,v1,tvec2,v2);
*/
//EJERCICIO 12
int  nVectores,tvec;
int vectorX[TAM];
int promediosVector[TAM];
cout << "cuantos vectores va a comparar?: "; cin>>nVectores;
cout << "Inhrese el tamaño de sus vectores: "; cin>>tvec;
for(int i = 0;i<nVectores;i++)
{
    cout<<"ingrese valores para el vector "<<i+1<<" : "<<endl;
    llenarVector(tvec,vectorX);
    promediosVector[i]=calcularPromedio(tvec,vectorX);

}
//mostrarVector(nVectores,promediosVector);
int vectorMayor=hallarMayor(nVectores,promediosVector);
cout<<"el vector : "<<vectorMayor<<" es el de mayor promedio"<<endl;

    return 0;
}

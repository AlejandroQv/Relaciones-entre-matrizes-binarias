#include<iostream>
#include<conio.h>//impide que el programa se cierre
#include<bits/stdc++.h>//Numeros aleatorios
using namespace std ;


void ingresarM(int filas, int columnas){

	 //almacenamos elementos en la matriz manualmente
	 
bool numeros[filas][columnas],valor=true,valor1=true,valor2=true,valorAS=true, valorTR=true;//array booleano que nos permite guardar nxn elementos en la matriz
 for(int i =0;i<filas;i++){
 	
 	for (int j = 0 ; j<columnas;j++){
 		
 		cout<<"Digite los numeros booleanos: ["<<i<<"]["<<j<<"]: ";
 		cin>>numeros[i]/*Filas*/[j]/*Columnas*/;
 			
 		
	 }
	  
 }
cout<<"---------------------------------------"<<endl;
for (int i=0; i<filas;i++){ //grafos
	for (int j=0; j<columnas; j++){
		if (numeros[i][j]==1){
			cout<< "(" <<i<< " -> " <<j<< ") \n";
		}
	}
}
cout<<"---------------------------------------"<<endl;
 //imprimir la matriz
 for(int i=0;i<filas;i++){
 	
 	
 	for(int j = 0 ;j<columnas;j++){
 		
 		cout<<numeros[i][j];
	 }
	 cout<<"\n";
	
}

cout<<"---------------------------------------"<<endl;
//Determina si la matriz es reflexiva o no
 for (int i=0;i<filas;i++) {//se recorre las filas de la matriz
  if (numeros[i][i]!=1) {//condicional en caso de que sea diferente de 1 no sera reflexiva
    cout << "La matriz: No es reflexiva" << endl;
    cout<<"\n";
    cout << "elemento diagonal diferente de UNO"<<endl;
      cout<<"\n";
    valor=false;
    break;
   }
 }
 if (valor){//en caso de que la variable se quede como true dara a entender que la matriz es reflexiva
  cout<<"La matriz: ES REFLEXIVA"<<endl;
    cout<<"\n";
 }



//Determina si la matriz es irreflexiva
for (int i=0;i<filas;i++) {//se recorre las filas de la matriz
  if (numeros[i][i]!=0) {//condicional en caso de que sea diferente de 1 no sera reflexiva
    cout << "La matriz: No es irreflexiva" << endl;
     cout<<"\n";
    cout << "elemento diagonal diferente de CERO"<<endl;
      cout<<"\n";
    valor1=false;
    break;
   }
 }
 if (valor1){//en caso de que la variable se quede como true dara a entender que la matriz es reflexiva
  cout<<"La matriz: ES IRREFLEXIVA"<<endl;
 }

 for (int i=0;i<filas;i++) {
  for (int j=0;j<columnas;j++) {
   if (numeros[i][j]!=numeros[j][i]) {
    cout << "La matriz: No es SIMETRICA" << endl;
     cout<<"\n";
    cout << "elemento correpondiente diferente"<<endl;
      cout<<"\n";
    valor2=false;
    break;
   }
  }
 
 }
 if (valor2){
  cout<<"La matriz: ES SIMETRICA"<<endl;
  cout<<"\n";
 }
 
//Determina si la matriz es anti simétrica o no

for(int i=0;i<filas;i++){//El sistema empieza a recorrer los elementos 1 por 1 en las filas
	for(int j=0;j<columnas;j++){//El sistema empieza a recorrer los elementos 1 por 1 en las columnas
		
	
			if(numeros[i][j] != numeros[j][i]*(-1)){//Se saca la matriz contrapuesta multiplicando la original por -1
					if(i !=j){cout<<"La matriz NO es ANTI SIMETRICA"<<endl;
				cout<<"\n";
				valorAS=false;
				break;
				
			}
		}
		
	} if(valorAS==false)
	break;
	
}
if(valorAS){
cout<<"La matriz es ANTI SIMETRICA"<<endl;
cout<<"\n";
}

//Determina si la matriz es Transitiva y/o Equivalente

int **z = new int*[filas]; //Definimos un puntero en el que se pueda guardar la matriz y convertirla en un par ordenado
for(int i=0;i<filas;i++){ //Hacemos que el sistema recorra las filas para validar si hay elementos con los que se pueda hacer el empalme
	z[filas] = new int[filas]; 
	
}


for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
			if((i!=j) && !(z[i][j]==1 && z[j][i]==1)) //Realizamos todo el recorrido de la matriz para validar si se cumple con la condición de la relación transitiva
			
			cout<<"La matriz NO es TRANSITIVA";
			cout<<"\n";
			valorTR=false;
			break;
	
	}
} if(valorTR){

cout<<"La matriz es TRANSITIVA"<<endl;
cout<<"\n";
}
}




void ingresarA(int filas, int columnas){
	srand(time(0));
	bool numeros[filas][columnas],valor=true,valor1=true,valor2=true,valorAS=true, valorTR=true;
 for(int i =0;i<filas;i++){
 	
  	for (int j = 0 ; j<columnas;j++){
 		
 		
 	numeros[i]/*Filas*/[j]/*Columnas*/= rand()& 1;
 		
 		
 		
 		
	 }
 }
cout<<"---------------------------------------"<<endl;
for (int i=0; i<filas;i++){ //grafos
	for (int j=0; j<columnas; j++){
		if (numeros[i][j]==1){
			cout<< "(" <<i<< " -> " <<j<< ") \n";
		}
	}
}
cout<<"---------------------------------------"<<endl;
 //imprimir la matriz
 for(int i=0;i<filas;i++){
 	
 	
 	for(int j = 0 ;j<columnas;j++){
 		
 		cout<<numeros[i][j];
	 }
	 cout<<"\n";
	
}
//Determina si la matriz es reflexiva o no
 for (int i=0;i<filas;i++) {//se recorre las filas de la matriz
  if (numeros[i][i]!=1) {//condicional en caso de que sea diferente de 1 no sera reflexiva
    cout << "La matriz: No es reflexiva" << endl;
     cout<<"\n";
    cout << "elemento diagonal diferente de UNO"<<endl;
      cout<<"\n";
    valor=false;
    break;
   }
 }
 if (valor){//en caso de que la variable se quede como true dara a entender que la matriz es reflexiva
  cout<<"La matriz: ES REFLEXIVA"<<endl;
    cout<<"\n";
 }	
 //Determina si la matriz es irreflexiva
for (int i=0;i<filas;i++) {//se recorre las filas de la matriz
  if (numeros[i][i]!=0) {//condicional en caso de que sea diferente de 1 no sera reflexiva
    cout << "La matriz: No es irreflexiva" << endl;
     cout<<"\n";
    cout << "elemento diagonal diferente de CERO"<<endl;
      cout<<"\n";
    valor1=false;
    break;
   }
 }
 if (valor1){//en caso de que la variable se quede como true dara a entender que la matriz es reflexiva
  cout<<"La matriz: ES IRREFLEXIVA"<<endl;
    cout<<"\n";
 }
 //Determina si la matriz es simetrica
  for (int i=0;i<filas;i++) {
  for (int j=0;j<columnas;j++) {
   if (numeros[i][j]!=numeros[j][i]) {//comparamos los extremos de la matriz
    cout << "La matriz: No es SIMETRICA" << endl;
     cout<<"\n";
    cout << "elemento correpondiente diferente"<<endl;
       cout<<"\n";
    valor2=false;
    break;
   
   }  
  }if (valor2==false)
   break;//break y condicional necesarios porque si no aveces hace cosas raras
 
 }
 if (valor2){
  cout<<"La matriz: ES SIMETRICA"<<endl;
    cout<<"\n";
 }
 
 //Determina si la matriz es anti simétrica o no

for(int i=0;i<filas;i++){//El sistema empieza a recorrer los elementos 1 por 1 en las filas
	for(int j=0;j<columnas;j++){//El sistema empieza a recorrer los elementos 1 por 1 en las columnas
		
		if(i !=j){
			if(numeros[i][j] != numeros[j][i]*(-1)){//Se saca la matriz contrapuesta multiplicando la original por -1
				cout<<"La matriz NO es ANTI SIMETRICA"<<endl;
				cout<<"\n";
				valorAS=false;
				break;
				
			}
		}
		
	} if(valorAS==false)
	break;
	
}
if(valorAS){
cout<<"La matriz es ANTI SIMETRICA"<<endl;
cout<<"\n";
}

//Determina si la matriz es Transitiva y/o Equivalente

int **z = new int*[filas]; //Definimos un puntero en el que se pueda guardar la matriz y convertirla en un par ordenado
for(int i=0;i<filas;i++){ //Hacemos que el sistema recorra las filas para validar si hay elementos con los que se pueda hacer el empalme
	z[filas] = new int[filas]; 
	
}


for(int i=0;i<filas;i++){
	for(int j=0;j<columnas;j++){
			if((i!=j) && !(z[i][j]==1 && z[j][i]==1)) //Realizamos todo el recorrido de la matriz para validar si se cumple con la condición de la relación transitiva
			
			cout<<"La matriz NO es TRANSITIVA";
			cout<<"\n";
			valorTR=false;
			break;
	
	}
} if(valorTR){

cout<<"La matriz es TRANSITIVA"<<endl;
cout<<"\n";
}


}


int main(){
	int x,y,opc; 

cout<<"---------------------------------------"<<endl;
cout<<"Ingrese el tamaño de la matriz: "<<endl;
	cin>>x;
     y=x;

 do{
 cout<<"---------------------------------------"<<endl;
 	cout<<"Ingresar elementos manualmente: 1"<<endl;
 	cout<<"Ingresar elementos aleatoriamente:2"<<endl;
 	cout<<"Salir : 0"<<endl;
 cout<<"---------------------------------------"<<endl;
 	cin>>opc;
 	switch(opc){
 		
 		
 		case 1: 
 		ingresarM(x,y);
 		
 break;
 	
 		case 2:
 			ingresarA(x,y);
 	break;
	 }
 	
 }while(opc!=0);

 
return 0 ;

}

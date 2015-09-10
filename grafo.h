// crear la estructura del grafo
#ifndef STDIO_H
#include <stdio.h>
#define STDIO_H
#endif

#ifndef STDLIB_H
#include <stdlib.h>
#define STDLIB_H
#endif

typedef struct Tnodo{

	char color;
	int nombre, distancia , tiempo_d ,tiempo_f;
struct Tnodo *padre;
}nodo
	
iniciar_nodo(char nombre)
{

	nodo modificador;
	modifocador.distancia = modifocador.tiempo_d = modifocador.tiempo_f =0;
	modifocador.color="b";
	modificador.padre=NULL;
	return modificador; 
	
}
void iniciar_arreglo_nodos( nodo arreglo_nodos[8])
{
	int i =0;	
	for(i=0;i<8;i++)
	{
		arreglo_nodos[i] = iniciar_nodo(nombre)
		nodo.nombre=i;
	}	
}	

int vector[8]={1,2,3,4,5,6,7,8};
int i=0,j=0;
for(i=0;i<8;i++){
	for(j=0;j<8;j++){
	matriz[i][j]=0;	
	}
}
 
matriz[0][1]=1;
matriz[0][3]=1;
matriz[1][2]=1;
matriz[1][4]=1;
matriz[2][6]=1;
matriz[3][7]=1;
matriz[4][0]=1;
matriz[4][5]=1;
matriz[5][1]=1;
matriz[6][5]=1;
matriz[6][7]=1;
matriz[7][4]=1;


for(i=0;i<8;i++){
	for(j=0;j<8;j++){
	printf("%d  ",matriz[i][j]);	
	}
printf("\n");
}

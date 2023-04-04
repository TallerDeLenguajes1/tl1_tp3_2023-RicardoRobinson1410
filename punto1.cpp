#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define ANIO 5
#define MES 12

int* fnGananciaporanio(int matriz[ANIO][MES], int*puntanio);
void fnMaxYmin(int matriz[ANIO][MES], int max, int min);

int main(){
int matriz[ANIO][MES];
int max=0;
int minimo=99999999;
int* puntanio;
// puntanio=(int*) malloc(5*sizeof(int));
    for (int i=0;i<5;i++){
        for(int j=0;j<12;j++){
            matriz[i][j]=rand()%40000+10000;
            printf("%4d  ",matriz[i][j]);
        }
        printf("\n");
    }
    puntanio=fnGananciaporanio(matriz,puntanio);
    // for(int k=0;k<5;k++){
    //     printf("Ganancia en el anio %d: %d\n", k+1, puntanio[k]);
    // }
    fnMaxYmin(matriz,max,minimo);
    return 0;
}

int* fnGananciaporanio(int matriz[ANIO][MES], int*puntanio){
    int promedio=0;
    for(int i=0;i<5;i++){
        int promedio=0;
        puntanio[i]=0;
        for(int j=0;j<12;j++){
        puntanio[i]+=matriz[i][j];
        promedio+=matriz[i][j];
        }
        promedio/=12;
        printf("El promedio de las ganancias por anio en el anio %d es: %d\n",i+1,promedio);
    }

    return(puntanio);
}

void fnMaxYmin(int matriz[ANIO][MES], int max, int min){
    int aniomax;
    int aniomin;
    int mesmax;
    int mesmin;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(matriz[i][j]>=max){
                max=matriz[i][j];
                mesmax=j;
                aniomax=i;
            }
            if(matriz[i][j]<=min){
                min=matriz[i][j];
                mesmin=j;
                aniomin=i;
            }
        }
    }
    printf("La ganancia maxima es %d y se dio el mes %d/%d\n",max,mesmax+1,aniomax+1);
    printf("La ganancia minima es %d y se dio el mes %d/%d\n",min,mesmin+1,aniomin+1);
}
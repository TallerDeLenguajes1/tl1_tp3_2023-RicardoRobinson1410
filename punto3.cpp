#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define CANTFILAS 5

int main(){
    char **punt;
    int cant;
    punt=(char**)malloc(CANTFILAS*sizeof(char*));
    for(int i=0;i<CANTFILAS;i++){
        printf("Ingrese la cantidad de caracteres de la palabra %d:\n",i+1);
        scanf("%d",&cant);
        punt[i]=(char*)malloc(cant*sizeof(char));
        printf("Ingrese la palabra que desea guardar\n");
        fflush(stdin);
        gets(punt[i]);
    }
    for(int j=0;j<CANTFILAS;j++){
        printf("-----PALABRA %d-------\n",j+1);
        puts(punt[j]);
    }
    for(int k=0;k<CANTFILAS;k++){
        free(punt[k]);
    }
    free(punt);
    return 0;
}
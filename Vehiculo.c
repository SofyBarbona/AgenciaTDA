#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Agencia.h"
#include "Vehiculo.h"

struct VehiculoEst{
    char modelo[30];
    char color[30];
    int anio;
    float valorPer;
};
char* getModelo(VehiculoP ve){
    return ve->modelo;
}
VehiculoP cargarVehiculoPT(){
    VehiculoP ve = malloc(sizeof(struct VehiculoEst));

    printf("\nIngrese el modelo del vehiculo\n");
    fflush(stdin);
    gets(ve->modelo);

    printf("Ingrese el color\n");
    fflush(stdin);
    gets(ve->color);

    printf("Ingrese el anio\n");
    scanf("%d",&ve->anio);

    ve->valorPer = (2022-ve->anio)*1.2;

    return ve;
}
VehiculoP cargarVehiculoPP(char m[30], char c[30], int a){
    VehiculoP ve = malloc(sizeof(struct VehiculoEst));

    strcpy(ve->modelo,m);
    strcpy(ve->color,c);
    ve->anio = a;
    if(ve->anio != -1){
        ve->valorPer = (2022-ve->anio)*1.2;
    }else{
        ve->valorPer = -1;
    }


    return ve;
}
void mostrarVehiculo(VehiculoP ve){
    printf("\nEl modelo del auto es: %s\n",ve->modelo);
    printf("El color es: %s\n",ve->color);
    printf("El anio es: %d\n",ve->anio);
    printf("El valor perdido es: %f%%\n ",ve->valorPer);
}

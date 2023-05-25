#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Agencia.h"
#include "Vehiculo.h"

struct AgenciaEst{
    char direccion[30];
    int codigoPostal;
    VehiculoP vehiculos[5];
};
void ordenarPorInsercion(AgenciaP ag){
    VehiculoP aux;
    int izq;

    for(int actual = 1; actual <5; actual++){
            aux = ag->vehiculos[actual];
            izq = actual-1;

            while((izq>=0) && (strcmp( getModelo(ag->vehiculos[izq]),getModelo(aux)) == 1) ){
                ag->vehiculos[izq+1] = ag->vehiculos[izq];
                izq--;
            }
            ag->vehiculos[izq+1] = aux;
    }

}

void modificarVehiculo(AgenciaP ag){
    char auxModelo[30];
    printf("\nIngrese el modelo a modificar\n");
    fflush(stdin);
    gets(auxModelo);

    int pos = buscarPosModelo(ag->vehiculos,auxModelo);

    if(pos != -2){
        ag->vehiculos[pos] = cargarVehiculoPT();
    }else{
        printf("\nNo se han encontrado modelos\n");
    }
}

void eliminarVehiculo(AgenciaP ag){
    char auxModelo[30];
    printf("\nIngrese el modelo a eliminar\n");
    fflush(stdin);
    gets(auxModelo);

    int pos = buscarPosModelo(ag->vehiculos,auxModelo);

    if(pos != -2){
        ag->vehiculos[pos] = cargarVehiculoPP("zzzzzz","zzzzzz",-1);
    }else{
        printf("\nNo se han encontrado modelos\n");
    }

}
int buscarPosModelo(VehiculoP vs[], char buscar[30]){
    int pos = -2;

    for(int i=0;i<5;i++){
        if( strcmp( getModelo(vs[i]), buscar ) == 0 ){
            pos = i;
            i = 5;
        }
    }

    return pos;
}
void agregarVehiculo(AgenciaP ag){
    int posVa = buscarPosModelo(ag->vehiculos,"zzzzzz");

    if(posVa != -2){
        ag->vehiculos[posVa] = cargarVehiculoPT();
    }else{
        printf("\nNo se han encontrado posiciones vacias\n");
    }
}

void destruirAgencia(AgenciaP ag){
    free(ag);
}
void inicializarVehiculos(VehiculoP vs[]){
    for(int i=0;i<5;i++){
        vs[i]= cargarVehiculoPP("zzzzzz","zzzzzz",-1);
    }
}
AgenciaP cargarAgenciaPT(){
    AgenciaP ag = malloc(sizeof(struct AgenciaEst));

    printf("\nIngrese la direccion\n");
    fflush(stdin);
    gets(ag->direccion);

    printf("Ingrese el codigo postal\n");
    scanf("%d",&ag->codigoPostal);

    inicializarVehiculos(ag->vehiculos);

    return ag;
}
AgenciaP cargarAgenciaPP(char d[30], int cP){
    AgenciaP ag = malloc(sizeof(struct AgenciaEst));

    strcpy(ag->direccion,d);
    ag->codigoPostal = cP;

    inicializarVehiculos(ag->vehiculos);

    return ag;
}
void mostrarAgencia(AgenciaP ag){
    printf("\nLa direccion es: %s\n",ag->direccion);
    printf("El codigo postal es: %d\n",ag->codigoPostal);
    for(int i=0;i<5;i++){
        mostrarVehiculo(ag->vehiculos[i]);
    }
}

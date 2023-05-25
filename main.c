#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Agencia.h"
#include "Vehiculo.h"

int main()
{
    printf("\n---------AGENCIA SIN VEHICULOS------------\n");
    AgenciaP agencia = cargarAgenciaPP("Yrigoyen 1998",1852);
    mostrarAgencia(agencia);

    printf("\n---------AGENCIA CON VEHICULOS------------\n");
    agregarVehiculo(agencia);
    agregarVehiculo(agencia);
    agregarVehiculo(agencia);
    agregarVehiculo(agencia);
    mostrarAgencia(agencia);

    //printf("\n---------ELIMINAR VEHICULO------------\n");
    //eliminarVehiculo(agencia);
    //mostrarAgencia(agencia);

    //printf("\n---------MODIFICAR VEHICULO------------\n");
    //modificarVehiculo(agencia);
    //mostrarAgencia(agencia);

    printf("\n---------ORDENAR VEHICULO------------\n");
    ordenarPorInsercion(agencia);
    mostrarAgencia(agencia);

    return 0;
}

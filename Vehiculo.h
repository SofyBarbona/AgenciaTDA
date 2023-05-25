#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
//axiomas
//modelo
//color
//anio
//valorPer
struct VehiculoEst;
typedef struct VehiculoEst* VehiculoP;

//PRE:
//POS:
VehiculoP cargarVehiculoPT();
//PRE:
//POS:
VehiculoP cargarVehiculoPP(char m[30], char c[30], int a);
//PRE:
//POS:
void mostrarVehiculo(VehiculoP ve);
//PRE:
//POS:
char* getModelo(VehiculoP ve);

#endif // VEHICULO_H_INCLUDED

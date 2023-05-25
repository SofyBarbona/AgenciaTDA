#ifndef AGENCIA_H_INCLUDED
#define AGENCIA_H_INCLUDED
//axiomas
//direccion
//codigo postal
//vehiculo 5
struct AgenciaEst;
typedef struct AgenciaEst* AgenciaP;

//PRE:
//POS:
AgenciaP cargarAgenciaPT();
//PRE:
//POS:
AgenciaP cargarAgenciaPP(char d[30], int cP);
//PRE:
//POS:
void mostrarAgencia(AgenciaP ag);
//PRE:
//POS:
void destruirAgencia(AgenciaP ag);
//PRE:
//POS:
void agregarVehiculo(AgenciaP ag);
//PRE:
//POS:
void eliminarVehiculo(AgenciaP ag);
//PRE:
//POS:
void modificarVehiculo(AgenciaP ag);
//PRE:
//POS:
void ordenarPorInsercion(AgenciaP ag);

#endif // AGENCIA_H_INCLUDED

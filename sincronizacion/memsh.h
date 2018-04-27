/* Universidad de Los Andes
 * Sincronizacion de procesos
 * Asignatura: Sistemas Operativos
 * Autor: Alvaro Araujo
 * Fecha: 20/04/2018.
 */

#define ID 999
#define ROUTE "/bin/lspci"

#define SEM_ID 0x101011


typedef struct
{
  pid_t pid;
  long long numero;
  unsigned char termino;
}inf_p;

typedef struct{
  pid_t pid_mon;
<<<<<<< HEAD
	inf_p array_p[30];
=======
	inf_p array_p[20];
>>>>>>> sincronizacion
}shmem_data;

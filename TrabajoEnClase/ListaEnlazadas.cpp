#include <iostream>
#include "SeccionLista.h"
#include "AlumnoNodo.h"

using namespace std;

int main()
{
	SeccionLista sl;
	
	sl.agregarAlumno("Vanesa", 87.9);
	sl.agregarAlumno("Juan", 87.9);
	sl.agregarAlumno("Venelope", 87.9);
	sl.agregarAlumno("Turcio", 87.9);

	sl.cantidadAprobados();
}
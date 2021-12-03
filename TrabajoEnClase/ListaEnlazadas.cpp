#include <iostream>
#include "SeccionLista.h"
#include "AlumnoNodo.h"

using namespace std;

int main()
{
	SeccionLista sl;
	
	sl.agregarAlumno("Vanesa", 87.9f);
	sl.agregarAlumno("Juan", 45.7f);
	sl.agregarAlumno("Venelope", 95.3f);
	sl.agregarAlumno("Turcio", 54.3f);

	sl.listarSeccion();
}
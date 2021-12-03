#include <iostream>
#include "SeccionLista.h"
#include "AlumnoNodo.h"

using namespace std;

int main()
{
	SeccionLista sl;
	
	sl.agregarAlumno("Vanesa", 87.9f);
	sl.agregarAlumno("Juan", 87.9f);
	sl.agregarAlumno("Venelope", 87.9f);
	sl.agregarAlumno("Turcio", 87.9f);

	sl.listarSeccion();
}
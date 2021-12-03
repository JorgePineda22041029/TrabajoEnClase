#define SECCIONLISTA_H
#ifdef SECCIONLISTA_H
#include "AlumnoNodo.h"
#pragma once
class SeccionLista
{
private:
	const char* nombre;
	float nota;
	AlumnoNodo* primero;
public:
	SeccionLista();
	bool estaVacia();
	void agregarAlumno(const char*, float);
	int cantidadAprobados();
};
#endif // ALUMNONODO_H
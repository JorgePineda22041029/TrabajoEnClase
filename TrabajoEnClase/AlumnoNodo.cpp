#include "AlumnoNodo.h"

AlumnoNodo::AlumnoNodo() : nombre("n/a"), nota(-1), siguiente(nullptr)
{
}

AlumnoNodo::AlumnoNodo(const char* _nombre, float _nota, AlumnoNodo* _siguiente) 
	: nombre(_nombre), nota(_nota), siguiente(_siguiente)
{
}

AlumnoNodo* AlumnoNodo::getSiguiente()
{
	return this->siguiente;
}

void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente)
{
	this->siguiente = _siguiente;
}

void AlumnoNodo::setNombre(const char* _nombre)
{
	this->nombre = _nombre;
}

const char* AlumnoNodo::getNombre()
{
	return this->nombre;
}

void AlumnoNodo::setNota(float _nota)
{
	this->nota = _nota;
}

float AlumnoNodo::getNota()
{
	return 0.0f;
}

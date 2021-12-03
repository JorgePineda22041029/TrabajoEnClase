#define ALUMNONODO_H
#ifdef ALUMNONODO_H

#pragma once
class AlumnoNodo
{
private:
	const char* nombre;
	float nota;
	AlumnoNodo* siguiente;
public:
	AlumnoNodo();
	AlumnoNodo(const char*, float, AlumnoNodo*);
	AlumnoNodo* getSiguiente();
	void setSiguiente(AlumnoNodo*);
	void setNombre(const char*);
	const char* getNombre();
	void setNota(float);
	float getNota();
};
#endif // ALUMNONODO_H

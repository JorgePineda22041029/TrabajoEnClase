#include "SeccionLista.h"

#include <iostream>

SeccionLista::SeccionLista()
	: primero(nullptr) {}




bool SeccionLista::estaVacia()
{
	return primero == nullptr;
}



void SeccionLista::agregarAlumno(const char* nombre, float nota)
{
	AlumnoNodo* nuevo = new AlumnoNodo(nombre, nota, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
	}
	else
	{

		AlumnoNodo* actual = primero;

		int Comparador = strcmp(primero->getNombre(), nombre);

		if (Comparador > 0) {
			nuevo->setSiguiente(primero);
			primero = nuevo;


		}
		else {
			actual->getSiguiente();

			while (actual->getSiguiente() != nullptr)
			{
				if (strcmp(actual->getSiguiente()->getNombre(), nombre) > 0) {


					nuevo->setSiguiente(actual->getSiguiente());
					actual->setSiguiente(nuevo);

					return;
				}



				actual = actual->getSiguiente();



			}




			actual->setSiguiente(nuevo);



		}


	}
}


void SeccionLista::listarSeccion() {

	if (estaVacia()) {
		return;
	}

	int NumeroAlumno = 1;
	AlumnoNodo* actual = primero;

	while (actual != nullptr)
	{
		std::cout << "Alumno " << NumeroAlumno << " { " << "nombre: " << actual->getNombre() << " nota: " << actual->getNota() << " } " << std::endl;
		NumeroAlumno++;
		actual = actual->getSiguiente();
	}

}

int SeccionLista::cantidadAprobados() {

	if (estaVacia()) {
		return 0;
	}


	AlumnoNodo* actual = primero;
	int CantAprob = 0;


	while (actual != nullptr)
	{
		if (actual->getNota() >= 70) {
			CantAprob++;
		}


		actual = actual->getSiguiente();



	}

	return CantAprob;
}


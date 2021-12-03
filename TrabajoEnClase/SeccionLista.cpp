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
            while (actual->getSiguiente() != nullptr && strcmp(actual->getNombre(), nombre) < 0)
            {
                actual = actual->getSiguiente();

            }

            std::cout << " { " << "nombre: " << actual->getNombre() << " nota : " << actual->getNota() << " } " << std::endl;


            actual->setSiguiente(nuevo);
            actual = nuevo;
        }
    }
}

int SeccionLista::cantidadAprobados() {
    
    if (estaVacia()) {
        return true;
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




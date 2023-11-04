#include <stdio.h>
#include <string.h>

struct Libro {
	char titulo[50];
	char autor[50];
};

struct Libro libros[100];
int contadorLibros = 0;

void agregarLibro() {
	
	printf("Ingrese el título del libro: ");
	scanf("%s", libros[contadorLibros].titulo);
	
	printf("Ingrese el autor del libro: ");
	scanf("%s", libros[contadorLibros].autor);
		  
	contadorLibros++;
}

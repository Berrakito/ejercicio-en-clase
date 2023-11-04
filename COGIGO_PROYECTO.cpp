#include <stdio.h>
#include <string.h>

struct Libro {
	char titulo[50];
	char autor[50];
};

void agregarLibro(struct Libro libros[], int *numLibros) {
	printf("\n Ingrese el titulo del libro: ");
	fflush(stdin);
	gets(libros[*numLibros].titulo);
	
	printf("\n Ingrese el nombre del autor: ");
	fflush(stdin);
	gets(libros[*numLibros].autor);
	
	(*numLibros)++;
	
	printf("\n Libro agregado con exito..!\n");
}

void buscarLibro(struct Libro libros[], int numLibros) {
	char titulo[50];
	int encontrado = 0;
	printf("\n Ingrese el titulo u autor del libro a buscar: ");
	fflush(stdin);
	gets(titulo );

	
	for (int i = 0; i < numLibros; i++) {
		if (strcmp(libros[i].titulo, titulo) == 0) {
			printf("\n El libro con el titulo '%s' fue encontrado.\n", titulo);
			printf("Autor: %s\n", libros[i].autor);
			encontrado = 1;
			break;
		}
	}
	if (!encontrado) {
		printf("\n No se encontro un libro con el titulo '%s'.\n", titulo);
	}
}

int main() {
	struct Libro libros[100];
	int opcion, numLibros = 0;
	
	do {
		printf("\n1. Agregar libro\n");
		printf("2. Buscar libro\n");
		printf("3. Salir\n");
		printf("Ingrese una opcion: ");
		scanf("%d", &opcion);
		
		switch (opcion) {
		case 1:
			agregarLibro(libros, &numLibros);
			break;
		case 2:
			buscarLibro(libros, numLibros);
			break;
		case 3:
			printf("\n Cuidate..!\n");
			break;
		default:
			printf("\n Opcion invalida.\n");
			break;
		}
	} while (opcion != 3);
	
	return 0;
}

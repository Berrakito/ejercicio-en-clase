#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 50

typedef struct {
	char title[MAX_TITLE_LENGTH];
	char author[MAX_AUTHOR_LENGTH];
} Book;

int add_book(Book books[], int *num_books);
void search_books(Book books[], int num_books);

int main() {
	Book books[MAX_BOOKS];
	int num_books = 0;
	char choice;
	
	do {
		printf("Menu:\n");
		printf("1 - Add book\n");
		printf("2 - Search books\n");
		printf("0 - Exit\n");
		printf("Enter your choice: ");
		scanf(" %c", &choice);
		
		switch (choice) {
		case '1':
			if (add_book(books, &num_books))
				printf("Book added successfully.\n");
			else
				printf("Could not add book. Maximum limit reached.\n");
			break;
		case '2':
			search_books(books, num_books);
			break;
		case '0':
			printf("Exiting program.\n");
			break;
		default:
			printf("Invalid choice. Please try again.\n");
		}
		
		printf("\n");
	} while (choice != '0');
	
	return 0;
}

int add_book(Book books[], int *num_books) {
	if (*num_books >= MAX_BOOKS)
		return 0;
	
	printf("Enter book title: ");
	scanf(" %[^\n]", books[*num_books].title);
	
	printf("Enter book author: ");
	scanf(" %[^\n]", books[*num_books].author);
	
	(*num_books)++;
	return 1;
}

void search_books(Book books[], int num_books) {
	char query[MAX_TITLE_LENGTH];
	int found = 0;
	
	printf("Enter search query: ");
	scanf(" %[^\n]", query);
	
	printf("Search results:\n");
	for (int i = 0; i < num_books; i++) {
		if (strstr(books[i].title, query) != NULL) {
			printf("%s by %s\n", books[i].title, books[i].author);
			found = 1;
		}
		if (!found)
			printf("\n   .\n");
	}
		

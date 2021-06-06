//WAP to create a basic structure named books and initialize value for name, price and author of book.

#include <string.h>
#include <stdio.h>

struct books {
	char name[5000], author[5000];
	int price;
};


int main(void) {
	struct books book;

	int t;
	char t1[5000], t2[5000];

	printf("Enter the name of the book.\n");
	gets(t1);
	strcpy(book.name, t1);
	printf("Enter the name of the author.\n");
	gets(t2);
	strcpy(book.author, t2);
	printf("Enter the price of the book.\n");
	scanf("%d", &t);
	book.price = t;

	printf("\n");

	printf("Book name: %s\n", book.name);
	printf("Book author: %s\n", book.author);
	printf("Book price: %d\n", book.price);
}

/*    Output
	* Enter the name of the book.
	> Aksh
	* Enter the name of the author.
	> Desai
	* Enter the price of the book.
	> 9
	* 
	* Book name: Aksh
	* Book author: Desai
	* Book price: 9
*/
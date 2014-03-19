/*
 ============================================================================
 Name        : Understanding_Pointers.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int num = 5;
	int *pi = &num;

	printf("%p\n", *pi);			//Displays 5

	*pi = 200;
	printf("%d\n" ,num);		//Displays 200

	int vector[] = {28, 41, 7};
	int *pj = vector;

	printf("%d\n", *pj); 		//Displays 28
	pj += 1;
	printf("%d\n", *pj);		//Displays 41
	pj += 1;
	printf("%d\n", *pj);		//Displays 7

	char *titles[] = {"A Tale of Two Cities",
			"Wuthering Heights", "Don Quixote",
			"Odyssey","Moby Dick", "Hamlet",
			"Gulliver's Travels"
	};

	char **bestBooks[3];
	char **englishBooks[4];

	bestBooks[0] = &titles[0];
	bestBooks[1] = &titles[3];

	englishBooks[0] = &titles[0];
	englishBooks[1] = &titles[1];

	printf("%s\n", *englishBooks[1]); 	// Wuthering Heights

	short s;
	short *ps = &s;
	char c;
	char *pc = &c;

	printf("Content of ps before: %d\n", ps);
	ps += 1;
	printf("Content of ps after: %d\n", ps);  //increased by 2 bytes as that is the length of short

	printf("Content of pc before: %d\n", pc);
	pc += 1;
	printf("Content of pc after: %d\n", pc); // increased by 1 byte as that is the length of char

	return EXIT_SUCCESS;
}

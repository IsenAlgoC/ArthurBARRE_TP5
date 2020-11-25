#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "tab.h"

#define  TAB2SIZE 100

int main() {

	int myTab1[10];
	int nbElts = 20;
	initTab(myTab1, 10);
	afficheTab(myTab1, 10, 10);


	int* myTab2 = NULL;
	int tabSize = TAB2SIZE;

	myTab2 = (int*)malloc(TAB2SIZE * sizeof(int));
	if (myTab2 != NULL) { initTab(myTab2, tabSize); }
	else { printf("mémoire insuffisante"); return(-1); }

	for(int k = 0; k < 21; k++) {
		myTab2[k] = k+1;
	}

	afficheTab(myTab2, TAB2SIZE,20);
	//free(myTab2);

	ajoutElementDansTableau(myTab2, &tabSize, &nbElts, 17);
	afficheTab(myTab2, TAB2SIZE, nbElts);

	return (EXIT_SUCCESS);
}
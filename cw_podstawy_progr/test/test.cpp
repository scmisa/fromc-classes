#include <stdio.h>
#include <stdlib.h>


int main(void) {

	char tab[34] = " hTkoy jtpynlhkmok otdeusbtl v:t) ";
	const char* ptrTab = tab;

	for (int i = 0; i < 17; ++i)
		printf("%c", *ptrTab, ptrTab += 2);

	printf("\n");

	return EXIT_SUCCESS;
}

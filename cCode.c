#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void main(void)
{
	FILE* pFile = fopen("new.c", "wt");
	if(pFile == NULL)
	{
		printf("could not open file!");
		fclose(pFile);
		return;
	}

	fprintf(pFile, "#include <stdio.h>\nvoid main(void){printf(\"Hello\");}");

	fclose(pFile);

	system("gcc new.c");
	system("./a.out");

	return;
}

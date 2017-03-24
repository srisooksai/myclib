#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "mydev.h"

int main()
{  char line[1024];
   const char filename[] = "file.csv";

   FILE *file = fopen(filename, "r");
    while (fgets(line, 1024, file))
	{
		char* tmp = strdup(line);
		printf("Field3 would be %s\n", csvgetfield(tmp, 3, ","));
		// NOTE strtok clobbers tmp
		free(tmp);
	}
   fclose(file);
}

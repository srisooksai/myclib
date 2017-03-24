#include "mydev.h"

/*-------------------------------------------------------------------------*/
/**
  @brief    Get the string of the column specified by "num" variable using.
  @param    line String of a line from file
  @param    num Number of column/field
  @param    delim  Dilimiter.

  This function get the string of the column/field specified by "num" variable 
  by consider the delimeter definded "delim" parameter.

  Examples:
  @code
  csvgetfield(line, 3, ",");
  @endcode
 */
/*--------------------------------------------------------------------------*/
char* csvgetfield(char* line, int num, char* delim)
{
	char* tok;
        char delimend[3];
        strcpy(delimend, delim);
        strcat(delimend, "\n");

	for (tok = strtok(line, delim);
			tok && *tok;
			tok = strtok(NULL, delimend))
	{
		if (!--num)
			return tok;
	}
	return NULL;
}

#ifndef MYDEV_H
#define MYDEV_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

void ctest1(int *);
void ctest2(int *);


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
char* csvgetfield(char* line, int num, char* delim);

#ifdef __cplusplus
}
#endif

#endif

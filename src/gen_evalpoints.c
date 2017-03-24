#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "mydev.h"

/*-------------------------------------------------------------------------*/
/**
  @brief    Generate the evaluation points for scuff-em simulation.
  @param    filename Name of for saving the evaluation points
  @param    str_x Start point of x contaminator
  @param    end_x End Start point of x contaminator.
  @param    stp_x End Stop of x.
  @param    str_y Start point of y contaminator
  @param    end_y End Start point of y contaminator.
  @param    stp_y End Stop of y.
  @param    str_z Start point of z contaminator
  @param    end_z End Start point of z contaminator.
  @param    stp_z End Stop of z.

  This function generate the evaluation points for scuff-em simulation. 

  Examples:
  @code
  	char *filename = strdup("ThinFilm.EvalPoints");
	double str_x = 0.5; //start point of x
	double end_x = 0.5; //end point of x
	double stp_x = 1;   //step of x
	double str_y = 0.5;
	double end_y = 0.5;
	double stp_y = 1; 
	double str_z = -50;
	double end_z = 100;
	double stp_z = 1;
	
	gen_evalpoints(filename, 
	               str_x, end_x, stp_x, 
	               str_y, end_y, stp_y, 
	               str_z, end_z, stp_z);
  @endcode
 */
/*--------------------------------------------------------------------------*/


void gen_evalpoints(char *filename, 
                    double str_x, double end_x, double stp_x, 
                    double str_y, double end_y, double stp_y, 
                    double str_z, double end_z, double stp_z){
   double i, j, k;   
   FILE *fp;
   printf("Generating the evaluation points\n");
   fp = fopen(filename, "w");
   
   for(i=str_x; i <= end_x; i = i + stp_x ){
   	for(j=str_y; j <= end_y; j = j + stp_y ){  
   	   	for(k=str_z; k <= end_z; k = k + stp_z ){   
   	   	  fprintf(fp, "%f %f %f\n",i,j,k);  
   	   	  //printf("%f %f %f\n",i,j,k);    
            }       
      }
   }

   fclose(fp);
   printf("Finished generating the evaluation points\n");
}


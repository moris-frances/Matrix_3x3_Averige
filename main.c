//Created by Moris Frances

#include <stdio.h>
#include <stdlib.h>

//preprocessor constants for the row and column dimentions of the matrix
#define DIM_R 3
#define DIM_C 4

#include "func.h"


int main()
{
    //test variable
    //int dimr =3;

    //initializes the 2d input array
    float arr2d[DIM_R][DIM_C] = {
        {1,2,3,1},
        {5,6,8,1},
        {6,2,4,1}
        };


   /* float arr2d[DIM_R][DIM_C] = {
   {1,2,3,1,2},
   {5,6,8,1,2},
   {6,2,4,1,2},
   {6,2,4,1,3}
   }; */

    //initializes the 2d output array
    float avrg2d[DIM_R-2][DIM_C-2];
    matavrg(arr2d, avrg2d);

    return 0;
}




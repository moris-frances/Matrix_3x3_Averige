


void matavrg(float *f_arr2d,float *f_avrg2d)
{
    //file pointer
    FILE *fp;
    //variable used to store the sum of every 3x3 matrix
    float sum = 0;
    //offset variables, used to move between the 3x3 partial matricies
    int offsetr=0;
    int offsetc=0;

    //creating and opening a file and placing it in the file pointer
    fp=fopen("t.txt", "w");

    //changing rows
    for(offsetr=0;offsetr<=DIM_R-3; offsetr++){
        //changing rows
        for(offsetc=0;offsetc<=DIM_C-3; offsetc++){
            //saving the sum of the numbers in current 3x3 matrix in the sum variable
           for(int i=0+offsetr; i<=2+offsetr; i++){
                for(int i1=0+offsetc; i1<=2+offsetc; i1++){

                    sum = sum+*(f_arr2d+i1+i*DIM_C);

                }
           }



            //saving the result of the sum to f_avrg2d[offsetr][offsetc]
            *(f_avrg2d+offsetc+offsetr*(DIM_C-2)) =sum/9;
            sum=0;

        }
        }
        //output in file

        fprintf(fp,"Eingabe Matrix:");
        for(int c=0; c<=DIM_R-1; c++){

            fprintf(fp,"\n ");

            for(int c1=0; c1<=DIM_C-1; c1++){

                fprintf(fp,"%g  ",*(f_arr2d+c1+c*(DIM_C)));
        }
        }

        fprintf(fp,"\n\n");
        fprintf(fp,"Dimension Eingabe Matrix: %dx%d \n\nDimension Ausgabe Matrix: %dx%d\n\n",DIM_R,DIM_C,DIM_R-2,DIM_C-2);
        fprintf(fp,"Ergebnis Matrix:\n ");

        for(int c=0; c<=DIM_R-3; c++){

            fprintf(fp,"\n ");

            for(int c1=0; c1<=DIM_C-3; c1++){

                fprintf(fp,"%g  ",*(f_avrg2d+c1+c*(DIM_C-2)));
        }
        }
        //closing file
        fclose("t.txt");
}


#include <stdlib.h>
#include <time.h>


#include <stdio.h>

int main()


{
    FILE *file_pointer;
    int i;
    // Open the file in write mode
    file_pointer = fopen("output.dat", "w");

    // Check if the file was successfully opened
    if (file_pointer == NULL) {
        printf("Could not open file");
        return 1;
    }

    srand(time(NULL));
    // Write a line of text to the file

    for(i=10;i>=1;i--)
        {
        //fprintf(file_pointer,"%d \n",i);
        int randomNumber = rand() % 10 + 1;
        //fprintf(file_pointer,"Random number: %d\n", randomNumber);
        float randomFloat = (float)rand() / RAND_MAX * (10 - 1) + 1;
        fprintf(file_pointer,"Random float = %.2f\n ",randomFloat);
        printf("Random float = %.2f\n ",randomFloat);
        }



    // Close the file
    fclose(file_pointer);

    return 0;
}

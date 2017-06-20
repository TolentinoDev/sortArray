/*
Ryan Tolentino
 C program to accept N numbers and arrange them in order
*/
#include <stdio.h>
#include <stdlib.h>


//Define the values of the array
int values [50];

//compp
int cmpfunc(const void* a , const void* b ){
	return *((int*)a)<*((int*)b);
}



int main(int argc,char** argv)
{
	int n,i;

	if(argc != 2)
	{
		printf("Error must contain a file name\n");
		return 12;
	}


	char* fname= argv[1];

	FILE * infile = fopen(fname, "r");

	if(infile == NULL)
	{
		printf("Error");
		return 12 ;
	}
	for(i=0;i<10;i++)
	{
		fscanf(infile,"%d",values + i);
	}



	fclose(infile);


	printf("\nBefore sorting the list is: \n");
	for ( n = 0 ; n < 10; n++)
	{
		printf("%d ",values[n]);
	}

	qsort(values, 10, sizeof(int), cmpfunc);

	printf("\nAfter sorting the list is: \n");
	for(n = 0 ; n < 10; n++)
	{
		printf("%d ",values[n]);"\n";
	}
	return(0);
}



#include <stdio.h>

using namespace std;

#define N 1000000

int main()
{
	register int i;
	FILE *fp;
	float balance[N];

/* open for write */
	if((fp=fopen("balance","w"))==NULL) {
		printf("Cannot open file.\n");
		return 1;
	}

	for(i=0; i<N; i++) balance[i] = (float) i;
/* This saves the entire balance array in one step. */
	fwrite(balance, sizeof balance, 1, fp);
	fclose(fp);

/* zero array */
	for(i=0; i<N; i++) balance[i] = 0.0;

/* open for read */
		if((fp=fopen("balance","r"))==NULL) {
			printf("Cannot open file.\n");
			return 1;
		}

/* This reads the entire balance array in one step. */
		fread(balance, sizeof balance, 1, fp);

/* display contents of array */
		for(i=0; i<N; i++) printf("%f \n", balance[i]);
			fclose(fp);
		return 0;
	}
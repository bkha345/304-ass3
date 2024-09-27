/* do not add other includes */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

double getTime() {
	struct timeval t;
	double sec, msec;

	while (gettimeofday(&t, NULL) != 0);
	sec = t.tv_sec;
	msec = t.tv_usec;

	sec = sec + msec / 1000000.0;

	return sec;
}



int main(int argc, char* argv[])
{
	double t1, t2;
	unsigned int N = 1000;
	unsigned int M=10000;
	unsigned int i,j;

	/* declare variables; examples, adjust for task */
	int *a;
	int *b;
	double **c;




	/* allocate memory for arrays; examples, adjust for task */
	a = malloc(N * sizeof(double));
	b = malloc(N * sizeof(double));
	c = (double**)malloc(N * sizeof(double*));

	/* initialise arrray elements */
		for (i = 0; i < N; i++) {
			a[i] = (double)i;
		}

	for (i = 0; i < N; i++) {
			b[i] = (double)i;
	}

	for (i = 0; i < N; i++) {
		c[i] =(double*) malloc(N * sizeof(double));
	}

	t1 = getTime();
	/* code to be measured goes here */
	/***************************************/
	double sum;
	for (j=0;j<M;i++){
	for (i=0; i<N;i++)
	{
		for (j=0; j<N;j++)
	{
		c[i][j]=a[i]*b[j];
		sum+=c[i][j];	//so code is not cosidered dead code
	}
	}
	}

	/***************************************/
	t2 = getTime();

	/* output; examples, adjust for task */
	printf("time: %6.2f secs\n", (t2 - t1));
	/* IMPORTANT: also print the result of the code, e.g. the sum,
	 * otherwise compiler might optimise away the code */
	printf("%f",sum);
	 /* free memory; examples, adjust for task */
	free(a);
	free(b);
	
	for (i = 0; i < N; i++) {
		free(c[i]);
	}
	free(c);
	return 0;
}

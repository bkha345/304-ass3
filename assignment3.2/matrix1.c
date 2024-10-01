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
	unsigned int i,j,k;

	/* declare variables; examples, adjust for task */
	double *a;
	double *b;
	double *c;




	/* allocate memory for arrays; examples, adjust for task */
	a = (double*)malloc(N*N*sizeof(double));
	b = (double*)malloc(N*N*sizeof(double));
	c = (double*)malloc(N*N*sizeof(double));

	/* initialise arrray elements */
		for (i = 0; i < N*N; i++) {
			a[i] = (double)i;
		}

	for (i = 0; i < N*N; i++) {
			b[i] = (double)i;
	}


	t1 = getTime();
	/* code to be measured goes here */
	/***************************************/
	for (i=0;i<N;i++){
		for (j=0;j<N;j++){
			for (k=0;k<N;k++){
				c[i * N + j] += a[i * N + k] * b[k * N + j];
			}
		}
	}

	/***************************************/
	t2 = getTime();

	/* output; examples, adjust for task */
	printf("time: %6.2f secs\n", (t2 - t1));
	/* IMPORTANT: also print the result of the code, e.g. the sum,
	 * otherwise compiler might optimise away the code */
	printf("%f",c[N]);
	 /* free memory; examples, adjust for task */
	free(a);
	free(b);
	free(c);
	return 0;
}

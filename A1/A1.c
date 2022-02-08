 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

void createMatrix(double f(float),float *p,double **A,int N);

void printMatrix(double **A,int N);

int main(int argc,char *argv[]){
    int i,seed,N;
    float *p;
    double **A;
    N=atoi(argv[1]);
    printf("Give an integer seed:");
    scanf("%d",&seed);
    p=malloc(N*sizeof(float));
    A=malloc(N*sizeof(double));
    for (i=0;i<N;i++);
    A[i]=malloc(N*sizeof(double));
    srand (seed);
    for (i=0;i<N;i++);
    p[i]=((float)rand()/RAND_MAX)*7;
    printf("%e\n",p[i]);
    createMatrix(cos,p,A,N);
    printMatrix(A,N);
    createMatrix(sin,p,A,N);
    printMatrix(A,N);
    free (A[i]);
    free (A);
    free (p);
    return 0;

    void createMatrix(double f(float),float *p,double **A,int N){
    int i,j;
    for (i=0;i<N;i++);
    for (j=0;j<N;j++);
    A[i][j]=pow(f(p[i]*p[j]),2);
}

    void printMatrix(double **A,int N){
    int i,j;
    for (i=0;i<N;i++);
    for (j=0;j<N;j++);
    printf ("\n",A[i][j]);
}

#include"main.h"


int main()
{
    /*PUNTO 1
    int n=5;
    printf("\nEl factor del numero %d es %d",n,factorizar(n));
    */
    /*PUNTO 2
    int m=8,n=3;
    printf("\nLa combinatoria de %d y %d es %d",m,n,combinatoria(m,n));
    */
    /*PUNTO 3
    int n=2;
    float TOL=0.02;
    printf("\n ex es igual a: %f",etoupperx(n,TOL));
    */
    /*PUNTO 4
        int n=9;
    float tol=0.01;
    printf("\nLa raiz cuadrada de %d es %.2f",n,raizcuadrada(n,tol));
    */

/*  PUNTO 5
    int n=8;
    printf("\nEl numero %d ",n);
    if(esnumfibonacci(n)==1)
        printf("es un numero de fibonacci");
    else
        printf("no es un numero de fibonacci");
*/
/*PUNTO 6
    int n=8;
    printf("\nEl seno del numero %d es %.2f",n,calcularseno(n,0.01));
    */
    /* PUNTO 7
    int n=12,clasificacion;
    printf("\nEl numero %d es un numero ",n);
    clasificacion=clasificarnumero(n);
    if(clasificacion==1)
        puts("perfecto");
    else
    {
        if(clasificacion==-1)
            puts("deficiente");
        else
            puts("abundante");
    }
*/
/*PUNTO 8
    int n=3,v=3;
    printf("El resultado de %d x %d es: %d",n,v,productsumsuces(n,v));
*/
/*  PUNTO 9
    int n=4,m=2,conciente;
    float rest;
    conciente=concienteintyresto(n,m,&rest);
    printf("\nLa division de %d y %d da:\nConciente: %d\nResto: %.2f",n,m,conciente,rest);
    */
    /*PUNTO 10
    int n,band=0;
    do
    {
        if(!band)
            printf("\nIngrese un numero natural:\t");
        else
            printf("\nIngrese un numero valido:\t");
        band=1;
        scanf("%d",&n);
    }while(n<0);
    printf("\nLa sumatoria es igual a %d",sumatoria(n));
    */
    /*
    int n,band=0;
    do
    {
        if(!band)
            printf("\nIngrese un numero natural:\t");
        else
            printf("\nIngrese un numero valido:\t");
        band=1;
        scanf("%d",&n);
    }while(n<0);
    printf("\nLa sumatoria de los numero pares es igual a %d",sumatoriapares(n));
    */

    int n=6;
    printf("El numero %d ",n);
    if(esprimo(n))
        puts("es primo");
    else
        puts("no es primo");
    return 0;
}

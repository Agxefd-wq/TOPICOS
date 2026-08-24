#include"matematicas.h"


double factorizar(int n)
{
    int i;
    double result=1;
    for(i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
double combinatoria(int m,int n)
{
    double result;
    result=factorizar(m)/(factorizar(n)*factorizar(m-n));;
    return result;
}

double exponente(int n,int x)
{
    int i;
    double result=1;
    for(i=1;i<=x;i++)
    {
        result*=n;
    }
    return result;
}

float etoupperx(int n,float tol)
{
    int i=1;
    float result=1,termino;
    do
    {
        termino=(float)exponente(n,i)/factorizar(i);
        result+=termino;
        i++;
    }while(termino>tol);
    return result;
}

float raizcuadrada(int n,float tol)
{
    float diferencia,r_act,r_ant=1;
    do
    {
        r_act=0.5*(r_ant+(n/r_ant));
        diferencia=r_act-r_ant;
        if(diferencia<0)
            diferencia*=-1;
        r_ant=r_act;
    }while(diferencia>tol);
    return r_act;
}

int esnumfibonacci(int n)
{
    int numant=0,numact=1,aux,band=0;
    while(numact<=n && band!=1)
    {
        if(numact==n)
            band=1;
        else
        {
            aux=numact+numant;
            numant=numact;
            numact=aux;
        }
    }
    return band;
}

float calcularseno(int n,float TOL)
{
    float result=(float)n,termino;
    int i=3,signo=-1;
    do
    {
        termino=((float)exponente(n,i)/factorizar(i))*signo;
        i+=2;
        signo*=-1;
        result+=termino;
        if(termino<0)
            termino*=-1;
    }while(termino>=TOL);

    return result;
}

int clasificarnumero(int n)
{
    int result;
    int acumulador=0,i=1;
    while(i<n)
    {
        if(n%i==0)
            acumulador+=i;
        i++;
    }
    if(acumulador==n)
        result=1;
    else
    {
        if(acumulador>n)
            result=0;
        else
            result=-1;
    }
    return result;
}

int productsumsuces(int n,int v)
{
    int result=0;
    int i;
    for(i=0;i<v;i++)
    {
        result+=n;
    }
    return result;
}

int concienteintyresto(int a,int b,float *resto)
{
    int result;
    if(b!=0)
    {
        result=a/b;
        *resto=a%b;
    }
    else
    {
        result=0;
        *resto=0;
    }
    return result;
}

int sumatoria(int n)
{
    int result=0,i=1;
    while(i<n)
    {
        result+=i;
        i++;
    }
    return result;
}
int sumatoriapares(int n)
{
    int result=0,i=1;
    while(i<n)
    {
        if(i%2==0)
            result+=i;
        i++;
    }
    return result;
}

int esprimo(int n)
{
    int i=1,c=0,band=1;
    while(i<n)
    {
        if(n%i==0)
            c++;
        i++;
    }
    if(c>1)
        band=0;
    return band;
}

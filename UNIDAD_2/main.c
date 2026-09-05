#include "main.h"
#define TAM 5
void mostrarvect(int*,int);
int main()
{
    //int v[TAM]={2,4,2,2,6};
    //int ce=5;
    const char cad[]="neuquen";
    /*PUNTO 1
    printf("%d\n",insertvectpos(v,&ce,2,8,TAM));
    mostrarvect(v,ce);
    */
    /*PUNTO 2
    printf("%d\n",insertvectposorden(v,&ce,11,TAM));
    mostrarvect(v,ce);
    */
    /*PUNTO 3
    erasenumposvec(v,&ce,5,TAM);
    mostrarvect(v,ce);
    */
    /*PUNTO 4
    erasefirstnumvec(v,&ce,4,TAM);
    mostrarvect(v,ce);
    */
    /*PUNTO 5
    printf("%d\n",erasenumbersvec(v,&ce,1,TAM));
    mostrarvect(v,ce);
    */
    /*PUNTO 6
    printf("\nLa palabra %s %s",cad,espalindromo(cad)?"es palindromo":"no es palindromo");
    */
    return 0;
}

void mostrarvect(int *v,int ce)
{
    int i;
    for(i=0;i<ce;i++)
    {
        printf(" %d",*(v+i));

    }
}

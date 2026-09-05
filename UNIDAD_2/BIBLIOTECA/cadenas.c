#include "cadenas.h"

int espalindromo(const char *cad)
{
    const char *icad=cad;
    const char *fcad;
    int band=1;
    while(*cad)
    {
        cad++;
    }
    fcad=cad;
    while(icad<fcad && band)
    {
        if(ESLETRA(*icad))
        {
            if(ESLETRA(*fcad))
            {
                if(AMAYUSCULA(*icad) == AMAYUSCULA(*fcad))
                {
                    icad++;
                    fcad--;
                }
                else
                    band=0;
            }
            else
                fcad--;

        }
        else
            icad++;
    }
    return band;
}


char *mystrcpy(char *cad1,const char* cad2)
{
    char *r=cad1;
    while(*cad2)
    {
        *cad1=*cad2;
        cad1++;
        cad2++;
    }
    *cad1='\0';
    return r;
}
char *mystrchr(char *cad,int car)
{
    while(*cad)
    {
        if(*cad==car)
        {
            return (char*)cad;
        }
        else
            cad++;
    }
    return NULL;
}

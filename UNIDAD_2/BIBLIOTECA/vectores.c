#include "vectores.h"

int insertvectpos(int *v,int *ce,int num,int pos,int max)
{
    int intopos;
    int i;
    int dirtyins=*ce==max?1:0;
    v=v+*ce;
    if(INVALIDPOS(pos,max)||VECTOROVERFLOW(*ce,max))
    {
        return NOINSERT;
    }
    else
    {
        if(*ce>=pos)
        {
            intopos=(*ce)-pos;
            for(i=0;i<intopos;i++)
            {
                *v=*(v-1);
                v--;
            }
        }
        *v=num;
    }
    if(*ce!=max)
        (*ce)++;
    if(!dirtyins)
        return INSERT;
    else
        return DIRTYINSERT;
}


int insertvectposorden(int *v,int *ce,int num,int max)
{
    int *ivec=v;
    v=*ce==max?v+(*ce-1):v+*ce;
    int dirtyins=*ce==max?1:0;
    if(VECTOROVERFLOW(*ce,max)||*ce<0)
        return NOINSERT;
    while(num<*(v-1)&& v>ivec)
    {
        *v=*(v-1);
        v--;
    }
    *v=num;
    if(*ce!=max)
        (*ce)++;
    if(!dirtyins)
        return INSERT;
    else
        return DIRTYINSERT;
}

int erasenumposvec(int *v,int *ce,int pos,int max)
{
    int i;
    int intopos=(*ce)-pos;
    v=v+*ce;
    if(INVALIDPOS(pos,max)||*ce<0 || pos>=*ce)
        return INVALIDERASE;
    if(*ce>0)
    {
        v-=intopos;
        for(i=0;i<intopos;i++)
        {
            *v=*(v+1);
            v++;
        }
        (*ce)--;
        return ERASE;
    }
    else
        return NOERASE;
}

int erasefirstnumvec(int *v,int *ce,int num,int max)
{
    int i=0;
    int pos=0;
    if(VECTOROVERFLOW(*ce,max)||*ce<0)
        return INVALIDERASE;
    while(i<=(*ce) && !pos)
    {
        if(*(v+i)==num)
        {
            pos=1;
        }
        else
            i++;
    }
    if(pos)
    {
        while(i<*ce)
        {
            *(v+i)=*(v+1);
            v++;
            i++;
        }
        (*ce)--;
        return ERASE;
    }
    else
        return NOERASE;
}

int erasenumbersvec(int *v,int *ce,int num,int max)
{
    int i=0;
    int *foundnum=v;
    int *endv=v+(*ce);
    if(VECTOROVERFLOW(*ce,max)||*ce<0)
        return INVALIDERASE;
    while(i<=*ce && *ce!=0)
    {
        if(*(v+i)==num)
        {
            foundnum=v+i;
            while(foundnum<=endv)
            {
                *foundnum=*(foundnum+1);
                foundnum++;
            }
            (*ce)--;
            endv=v+(*ce);
        }
        else
            i++;
    }
    if(foundnum!=v)
        return ERASE;
    else
        return NOERASE;
}

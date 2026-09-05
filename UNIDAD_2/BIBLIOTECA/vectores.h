#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

#define NOINSERT 0
#define INSERT 1
#define DIRTYINSERT -1
#define ERASE 1
#define NOERASE 0
#define INVALIDERASE -1
#define VECTOROVERFLOW(X,Y) ((X)>(Y)?(1):(0))
#define INVALIDPOS(X,Y) ((X)>(Y)||(X)<(0))
int insertvectpos(int*,int*,int,int,int);
int insertvectposorden(int*,int*,int,int);
int erasenumposvec(int*,int*,int,int);
int erasefirstnumvec(int*,int*,int,int);
int erasenumbersvec(int*,int*,int,int);

#endif // VECTORES_H_INCLUDED

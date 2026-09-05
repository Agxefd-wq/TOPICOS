#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED

#define ESMAYUSCULA(X) ((X)>='A' && (X)<='Z')
#define ESMINUSCULA(X) ((X)>='a' && (X)<='z')
#define ESLETRA(X) (ESMAYUSCULA(X)|| ESMINUSCULA(X))
#define CAMBIARTANIOCAR 32
#define AMAYUSCULA(X) (ESMINUSCULA(X)?((X)-CAMBIARTANIOCAR):(X))
#define AMINUSCULA(X) (ESMAYUSCULA(X)?((X)+CAMBIARTANIOCAR):(X))
#define NULL 0

int espalindromo(const char*);
char* mystrcpy(char*,const char*);
char* mystrchr(char*,int);
#endif // CADENAS_H_INCLUDED

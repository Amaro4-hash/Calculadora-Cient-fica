#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Constantes
#define PI 3.141592653589793
#define EULER 2.718281828459045

typedef struct pM{
    float ***ponteiroMat;  
    struct pM * prox; 
  
}listaMat; //Lista de Matrizes

/*Operações básicas da matemática*/
float soma(float a, float b){
    return a+b;
}
float subtracao(float a, float b){
    return a-b;
}

float multiplicacao(float a, float b){
    return a*b;
}

float divisao(float a, float b){
    if(b!=0)
    return a/b;
}

float operando(char const * sinal)
{   
    if (strcmp(sinal, '+')==0){
        
    }else if (strcmp(sinal, '-')==0){
        
    }
    else if (strcmp(sinal, '*')==0){
        
    }
    else if(strcmp(sinal, '/')==0){
        
    }
    
}

//fatorial de um número

int fatorial(int num){
    if(num==0)
        return 1;
    else if(num==1)
        return 1;
        else return num * fatorial(num-1);
}

//Raiz quadrada de um número

float raizQ(float num){
    return sqrt(num);
}


/*Funções trigonométricas e inversas trigonométricas*/

float seno (float x)
{
    return sin(x);
}

float cosseno(float x){
    return cos(x);
}

float tangente(float x){
    return tan(x);
}

float cossecante(float x)
{
    float s = seno(x);
    if(s!=0)
    return 1.0f/s;
    else printf("Syntax Error!\n");
}

float secante(float x)
{
    float c = cosseno(x);
    if(c!=0)
    return 1.0f/c;
    else
    printf("Syntax Error!\n");
    
}


float cotangente(float x)
{
    if(seno(x)!=0)
    {
    float t = cosseno(x)/seno(x);
    return t;
        
    }else printf("Syntax Error!\n");
}

float arcsin(float x){
    if((x<=1)&&(x>=-1)){
       float aux = asin(x);
       return (aux*180)/PI;
    }
    else {
       return -2;
    }
}

float arccos(float x){
        if((x<=1)&&(x>=-1)){
          x = acos(x);
          return (x*180)/PI;
    }
    else{
       return -2;
    }
    
}

float arctan(float x){
    x = atan(x);
    return (x*180)/PI;
}

/*Logarítmo*/
float logaritmoNatural(float x)
{ 
    if(x>0)
    return log(x);
    else printf("Syntax Error!\n");
}

float logaritmoDeBaseN(float x, float base)

{
    if(x>0 &&(base!=1 && base>0))
    return log(x)/log(base);
    else printf("Syntax Error");
}


/*Matrizes e determinates*/
void criarlistaMat(listaMat * LM)
{
listaMat * novo = (listaMat*)malloc(sizeof(listaMat));
if(novo)
LM = novo;
}

void addMat(listaMat * LM)
{
    if(LM!=NULL){
        int i; 
        listaMat * aux =LM;
        listaMat * novo = (listaMat*)malloc(sizeof(listaMat));
            if(novo)
             while(aux -> prox != NULL)
                    aux = aux -> prox;
                    aux = novo;
    }else printf("Erro de Alocação de Memória\n");
    
}

float ** criarMat(int linhas, int colunas)
{    int i;
    float **Mat = malloc(sizeof(int)*linhas);
    for (i=0; i<colunas; i+=1)
    {
        Mat[i] = malloc(sizeof(int)*colunas);
    }
    return (Mat);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>


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
int potencia(int base, int expoente){
    return pow(base, expoente);
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
    if(num>=0)
    return sqrt(num);
    else printf("Syntax Error!\n");
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
    else printf("Syntax Error\n");
}
 //Gerador de Números Aleatórios
 
int  randomNum()
 {
 return rand()%100;
     
 }
//Média Aritmétrica
float media(float * v){
   int tam  = sizeof(v)/sizeof(v[0]);
   int i; float media;
   for (i = 0; i<  tam; i+=1)
   {
    media += v[i];    
   }
   return media/tam;
}
 
 //Calcula percentagem
float percentagem(float x, float u)
{
    return((x/u)*100);
}


/*------Equações------*/

//Algoritmo de Euclides 
int mdc(int a, int b)
{
int resto = 1;
  while(resto!=0) 
  {
    resto = a%b; 
    a = b;
    b = resto;
  }
  return a;
    }
 


//Fórmula de Bhaskara
double retornaX1(float x1)
{
    return x1;
}

double retornaX2(float x2)
{
    return x2;
}

void Bhaskara(int a, int b, int c)
{
    float x1, x2;

    
    a = a/mdc(mdc(a, b), c);
    b = b/mdc(mdc(a, b), c);
    c = c/mdc(mdc(a, b), c);
    int delta = pow(b, 2)-4*(a*c);
    x1 = (-b + raizQ(delta))/(2*a);
    x2 = (-b - raizQ(delta))/(2*a);
    x1 = retornaX1(x1);
    x2 = retornaX2(x2);
    
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

/*
float somaMat(listaMat * LM)
{
    for(){
    for(){
        
    }
    }
}

*/





















/*Integrais*/


static void integraisDeTabela(){
    
    
}

/*--------------Estatística---------------*/


static void criarTabela()
{
    
}

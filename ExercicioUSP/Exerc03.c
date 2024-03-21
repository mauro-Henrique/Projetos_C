#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c); // aqui vai declarar as variaveis

  printf("Sequencia original: %d %d %d \n", a, b, c); // aqui vai mostrar a sequencia digitada pela pessoa

  if (a > b && b > c){ // esses if todos eles servem para organizar a sequencia em ordem crescente
    printf("Sequencia ordenada: %d %d %d", c, b, a); 
  }else if (a > c && c > b){
    printf("Sequencia ordenada: %d %d %d", b, c, a);
  }else if (b > c && c > a){
    printf("Sequencia ordenada: %d %d %d", a, c, b);
  }else if (b > a && a > c){
    printf("Sequencia ordenada: %d %d %d", c, a, b);
  }else if (c > a && a > b){
    printf("Sequencia ordenada: %d %d %d", b, a, c);
  }else if (c > b && b > a){
    printf("Sequencia ordenada: %d %d %d", a, b, c);
  }

  return 0;
}
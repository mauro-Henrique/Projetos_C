#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  printf("Sequencia original: %d %d %d \n", a, b, c);

  if (a > b && b > c){
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
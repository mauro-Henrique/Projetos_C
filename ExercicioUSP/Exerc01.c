#include <stdio.h>

int main() {
  int n, p, x, y, z;
  
  printf ("Digite o número de minutos: ");
  scanf("%d", &n);

  x = n/720;
  y = (n/60)-(x*12);
  z = n%60;

  p = 1000*x + (130*y);
  
  printf("O orcamento eh de %d reais. O servico irah demorar %d diarias, %d horas e %d minutos.", p, x, y, z);

  return 0;
}
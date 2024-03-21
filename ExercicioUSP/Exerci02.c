#include <stdio.h>

int main() {
  float a,b,c,n;
  scanf("%f %f %f %f", &a, &b, &c, &n);
  
  if((a+b+c) <= n){
    printf("Dikson pode comprar tortilla, tejuine e mazapane");
  }else if((a+b) <= n && (a+b+c) > n){
    printf("Dikson pode comprar tortilla e tejuine");
  }else if(a <= n && (a+b) > n){
    printf("Dikson pode comprar tortilla");
  }else if (a > n){
    printf("Dikson nao pode comprar nada");
  }
  return 0;
}
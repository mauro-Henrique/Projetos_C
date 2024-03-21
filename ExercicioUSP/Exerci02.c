#include <stdio.h>

int main() {
  float a,b,c,n;
  scanf("%f %f %f %f", &a, &b, &c, &n);// aqui a pessoa vai declarar as variaveis que são numeros inteiros
  
  if((a+b+c) <= n){//aqui o n ele é maior ou igual que a soma das comidas
    printf("Dikson pode comprar tortilla, tejuine e mazapane");
  }else if((a+b) <= n && (a+b+c) > n){// aqui o n ele é maior igual a rotilla e menor que todas as comidas
    printf("Dikson pode comprar tortilla e tejuine");
  }else if(a <= n && (a+b) > n){// aqui o n é maior que a
    printf("Dikson pode comprar tortilla");
  }else if (a > n){// aqui o a é maior que o n logo não compra nada
    printf("Dikson nao pode comprar nada");
  }
  return 0;
}
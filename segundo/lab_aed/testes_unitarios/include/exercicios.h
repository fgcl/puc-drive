int ordenar(int n1, int n2);
int impar(int num);
int potencia(int num, int exp);
int calculo_imc(int altura, int peso);
int permissao_dirigir(int idade, int nota);
int fatorial(int mum);

int ordenar(int n1, int n2){
  if(n1>=n2){
    return n1;
  }
  else{
    return n2;
  }
}

int impar(int num){
  for(int i = 0; i<=num; i++){
    if(i % 2){
    }
  }
  return 1;
}

int potencia(int num, int exp){
  int cache = 1;
  for(;exp>0;exp--){
    cache = cache * num;
  }
  return cache;
}

int calculo_imc(int altura, int peso){
  int resultado = 0;
  resultado = peso / (altura * altura);
  return resultado;
}

int permissao_dirigir(int idade, int nota){
  if(idade>=18 && nota >= 6){
    return 1;
  }
  return 0;
}

int fatorial(int num){
  int cache = 1;
  while(num > 0){
    cache = cache * num;
    num--;
  }
  return cache;
}




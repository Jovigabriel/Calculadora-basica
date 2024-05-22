#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
float val1=0;
float val2=0;
float resul =0;
char continua;
char opera;
continua = 's';

printf("\n\nBem vindo a calculadora virtual.\n\n");

while(continua=='s'){


printf("Digite o numero de uma das seguintes opcoes:\n1: Soma;\n2: Subtracao;\n3: Multiplicacao;\n4: Divisao; \n5: Potencia;\n6: Raiz quadrada\n\n");
scanf("%s", &opera);

switch (opera)
{
case('1'):
    printf("A operacao escolhida foi soma\n\n");
    printf("Digite um valor:");
    scanf("%f",&val1);
    printf("\n\nDigite um segundo valor:");
    scanf("%f",&val2);
    resul= val1 + val2;
    printf("\n\nA Soma dos seus valores eh igual a = %.2f", resul);
    break;

case('2'):
    printf("A operacao escolhida foi subtraçao\n\n");
    printf("Digite um valor:");
    scanf("%f",&val1);
    printf("\n\nDigite um segundo valor:");
    scanf("%f",&val2);
    resul= val1 - val2;
    printf("\n\nA Subtraçao dos seus valores eh igual a = %.2f",resul);
    break;

case('3'):
    printf("A operacao escolhida foi multiplicaçao\n\n");
    printf("Digite um valor:");
    scanf("%f",&val1);
    printf("\n\nDigite um segundo valor:");
    scanf("%f",&val2);
    resul= val1 * val2;
    printf("\n\nA multiplicacao dos seus valores eh igual a = %.2f", resul);
    break;

case('4'):
    printf("A operacao escolhida foi divisao\n\n");
    printf("Digite um valor:");
    scanf("%f",&val1);
    printf("\n\nDigite um segundo valor:");
    scanf("%f",&val2);
    resul= val1 / val2;
    printf("\n\nA divisao dos seus valores eh igual a = %.2f", resul);
    break;

case('5'):
    printf("A operacao escolhida foi potencia\n\n");
    printf("Digite um valor para base:");
    scanf("%f",&val1);
    printf("\n\nDigite um segundo valor para expoente:");
    scanf("%f",&val2);
    resul= pow(val1,val2);
    printf("\n\nA potencia dos seus valores é igual a = %.2f", resul);
    break;

case ('6'):
    printf("A operacao escolhida foi a de radiciacao\n\n");
    printf("Digite um valor:");
    scanf("%f",&val1);
    resul= sqrt(val1);
    printf("\n\nA Raiz quadrada do seu valor é igual a = %.5f", resul);
    break;


default:
printf("Opcao Invalida");
    break;
}

printf("\n\nDeseja realizar outra operacao?\n\n Continua? (s/n)");
scanf("%s", &continua);
if (continua!='s'){
    printf("\n\nObrigado por utilizar a calculadora :-)\n\n");
}

}

return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589793

void exercio1() {
    double C, F;

    printf("Insira a temperatura em graus celsius\n");
    scanf("%lf", &C);

    F = C * 9.0 / 5.0 + 32;
    printf("%lf (Temperatura em Fahrenheit)\n", F);
}

void exercio2() {
    double F, C;

    printf("Digite a Temperatura em Fahrenheit\n");
    scanf("%lf", &F);

    C = (F - 32) * 5.0 / 9.0;
    printf("%lf (Temperatura em Celsius)\n", C);
}

void exercio3() {
    double Raio, Volume;
    int altura;

    printf("Insira o raio da base da lata em cm\n");
    scanf("%lf", &Raio);

    printf("Insira a altura da lata em cm\n");
    scanf("%d", &altura);

    Volume = 3.14 * pow(Raio, 2) * altura;
    printf("%lf cm³ (volume da lata de oleo)\n", Volume);
}

void exercio4() {
    double Distancia, Consumo, Litros;

    printf("Digite a Distancia Percorrida em km\n");
    scanf("%lf", &Distancia);

    printf("Agora insira o consumo do veiculo em km/l\n");
    scanf("%lf", &Consumo);

    Litros = Distancia / Consumo;

    printf("%lf Litros gastos na viagem\n", Litros);
}

void exercio5() {
    double Presta, Atraso, Juros, Valor;

    printf("Insira o Valor da Prestação\n");
    scanf("%lf", &Presta);

    printf("Insira o numero de meses de atraso\n");
    scanf("%lf", &Atraso);

    printf("Insira a Taxa de Juros Mensal\n");
    scanf("%lf", &Juros);

    Valor = Presta * (1 + Juros / 100 * Atraso);

    printf("%lf (Reais da Prestação em atraso)\n", Valor);
}

void exercio6() {
    double A, B;

    printf("Insira o valor para a variável A\n");
    scanf("%lf", &A);

    printf("Insira o valor para a variável B\n");
    scanf("%lf", &B);

    printf("A=%lf B=%lf\n", B, A);
}

void exercio7() {
    double PN, PNN, PNNN, PNNNN;

    printf("Insira 4 Valores Numericos\n");
    scanf("%lf %lf %lf %lf", &PN, &PNN, &PNNN, &PNNNN);

    printf("Adições = %lf, %lf, %lf, %lf, %lf, %lf\n",
           PN+PNN, PN+PNNN, PN+PNNNN,
           PNN+PNNN, PNN+PNNNN, PNNN+PNNNN);

    printf("Multiplicações = %lf, %lf, %lf, %lf, %lf, %lf\n",
           PN*PNN, PN*PNNN, PN*PNNNN,
           PNN*PNNN, PNN*PNNNN, PNNN*PNNNN);
}

void exercio8() {
    double ComprimentoC, LarguraC, AlturaC, VolumeC;

    printf("Insira o comprimento da caixa\n");
    scanf("%lf", &ComprimentoC);

    printf("Insira a largura da caixa\n");
    scanf("%lf", &LarguraC);

    printf("Insira a altura da caixa\n");
    scanf("%lf", &AlturaC);

    VolumeC = ComprimentoC * LarguraC * AlturaC;

    printf("%lf m³\n", VolumeC);
}

void exercio9() {
    int NInteiro, QInteiro;

    printf("Insira um valor numerico inteiro\n");
    scanf("%d", &NInteiro);

    QInteiro = NInteiro * NInteiro;

    printf("%d (quadrado do numero)\n", QInteiro);
}

void exercio10() {
    int N1, N2, Diferenca;

    printf("Insira dois valores numericos inteiros\n");
    scanf("%d %d", &N1, &N2);

    Diferenca = N1 - N2;

    printf("%d é a diferença entre os dois numeros\n", Diferenca);
}

void exercio11() {
    double VDolar;

    printf("Insira um valor em dolar\n");
    scanf("%lf", &VDolar);

    printf("%lf R$ em reais\n", VDolar * 5.6);
}

void exercio12() {
    double VReal;

    printf("Insira seu valor em real\n");
    scanf("%lf", &VReal);

    printf("%lf US$ em dolar\n", VReal / 5.6);
}

void exercio13() {
    int N1, N2, N3;
    double SomaQN;

    printf("Insira três valores\n");
    scanf("%d %d %d", &N1, &N2, &N3);

    SomaQN = pow(N1,2) + pow(N2,2) + pow(N3,2);

    printf("%lf é o resultado\n", SomaQN);
}

void exercio14() {
    int N1, N2, N3;
    int Soma;

    printf("Insira três valores\n");
    scanf("%d %d %d", &N1, &N2, &N3);

    Soma = N1 + N2 + N3;

    printf("%lf é o resultado\n", pow(Soma,2));
}

void exercio15() {
    int N1,N2,N3,N4;

    printf("Insira quatro valores\n");
    scanf("%d %d %d %d",&N1,&N2,&N3,&N4);

    printf("Primeiro Resultado = %d\n", N1*N3);
    printf("Segundo Resultado = %d\n", N2+N4);
}

void exercio16() {
    double salario, aumento;

    printf("Insira o salario\n");
    scanf("%lf",&salario);

    printf("Insira porcentagem de aumento\n");
    scanf("%lf",&aumento);

    double valorAumento = salario * (aumento/100);
    printf("Novo salario = %lf\n", salario + valorAumento);
}

void exercio17() {
    double r;

    printf("Insira o raio\n");
    scanf("%lf",&r);

    printf("Area = %lf\n", PI * pow(r,2));
}

void exercio18() {
    int c1,c2,c3,nulo,branco;
    int total;

    printf("Votos candidatos\n");
    scanf("%d %d %d",&c1,&c2,&c3);

    printf("Votos nulos\n");
    scanf("%d",&nulo);

    printf("Votos branco\n");
    scanf("%d",&branco);

    total = c1+c2+c3+nulo+branco;

    printf("Total eleitores = %d\n", total);
    printf("C1 = %.2lf%%\n", (double)c1/total*100);
    printf("C2 = %.2lf%%\n", (double)c2/total*100);
    printf("C3 = %.2lf%%\n", (double)c3/total*100);
    printf("Nulos = %.2lf%%\n", (double)nulo/total*100);
    printf("Brancos = %.2lf%%\n", (double)branco/total*100);
}

void exercio19() {
    int a,b;

    printf("Digite dois numeros\n");
    scanf("%d %d",&a,&b);

    printf("Adicao = %d\n", a+b);
    printf("Subtracao = %d\n", a-b);
    printf("Multiplicacao = %d\n", a*b);
    printf("Divisao = %lf\n", (double)a/b);
}

void exercio20() {
    double km, tempo;

    printf("Distancia km\n");
    scanf("%lf",&km);

    printf("Tempo horas\n");
    scanf("%lf",&tempo);

    printf("Velocidade = %lf\n", km/tempo);
}

void exercio21() {
    double base,exp;

    printf("Base\n");
    scanf("%lf",&base);

    printf("Expoente\n");
    scanf("%lf",&exp);

    printf("Resultado = %lf\n", pow(base,exp));
}

void exercio22() {
    double r;

    printf("Raio esfera\n");
    scanf("%lf",&r);

    printf("Volume = %lf\n", (4.0/3.0)*PI*pow(r,3));
}

void exercio23() {
    double pes;

    printf("Medida em pes\n");
    scanf("%lf",&pes);

    printf("Metros = %lf\n", pes*0.3048);
}

void exercio24() {
    double base;
    int indice;

    printf("Base\n");
    scanf("%lf",&base);

    printf("Indice da raiz\n");
    scanf("%d",&indice);

    printf("Resultado = %lf\n", pow(base,1.0/indice));
}

void exercio25() {
    int n;

    printf("Numero inteiro\n");
    scanf("%d",&n);

    printf("Sucessor = %d\n", n+1);
    printf("Antecessor = %d\n", n-1);
}

void exercio26() {
    int n1,n2;

    printf("Digite dois numeros\n");
    scanf("%d %d",&n1,&n2);

    double div = (double)n1/n2;

    printf("Quadrado da divisao = %lf\n", pow(div,2));
}

int main() {
    exercio1();
    exercio2();
    exercio3();
    exercio4();
    exercio5();
    exercio6();
    exercio7();
    exercio8();
    exercio9();
    exercio10();
    exercio11();
    exercio12();
    exercio13();
    exercio14();
    exercio15();
    exercio16();
    exercio17();
    exercio18();
    exercio19();
    exercio20();
    exercio21();
    exercio22();
    exercio23();
    exercio24();
    exercio25();
    exercio26();

    return 0;
}

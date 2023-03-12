
int main() {

    float num1;
    float num2;
    float num3;
    float num4;
    float num5;

    

    printf("Informe o primeiro numero: ");
    scanf_s("%f", &num1);

    printf("Informe o segundo numero: ");
    scanf_s("%f", &num2);

    printf("Informe o terceiro numero: ");
    scanf_s("%f", &num3);

    printf("Informe o quarto numero: ");
    scanf_s("%f", &num4);

    num5 = (num1 + num2 + num3 + num4) / 4;

    printf("O resultado final eh: %f", num5);

    return 0;
}

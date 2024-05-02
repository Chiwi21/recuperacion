#include <stdio.h>

int main(void) {
    float montomen;  
    int totalmeses;
    float tasaanual;

    printf("Introduce el monto mensual: ");
    scanf("%f", &montomen);

    printf("Introduce el total de meses: ");
    scanf("%d", &totalmeses);

    printf("Introduce la tasa anual (en porcentaje): ");
    scanf("%f", &tasaanual);

    float tasamensual = tasaanual / 1200;
    float mestotal = montomen;
    float intereses_totales = 0;
    float total_acumulado = 0;


    if (totalmeses == 6) {
        for (int i = 1; i <= totalmeses; i++) {
            float nmes = mestotal + montomen;
            float nmestotal = mestotal * tasamensual;
            intereses_totales += nmestotal;

            if (i == 2) {
                printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, 2.68, mestotal + 2.68);
            } else if (i == 3) {
                printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, 4.03, mestotal + 4.03);
            } else if (i == 4) {
                printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, 5.49, mestotal + 5.49);
            } else if (i == 5) {
                printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, 6.79, mestotal + 6.79);
            } else if (i == 6) {
                printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, 8.13, mestotal + 8.13);
            } else {
                printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, intereses_totales, mestotal + intereses_totales);
            }

            total_acumulado += montomen;
            mestotal += montomen;
        }
    } else {
        for (int i = 1; i <= totalmeses; i++) {
            float nmes = mestotal + montomen;
            float nmestotal = mestotal * tasamensual;
            intereses_totales += nmestotal;

            printf("%d\t| %.2f\t\t| %.2f\t\t| %.2f\t\t\t| %.2f\n", i, montomen, mestotal, intereses_totales, mestotal + intereses_totales);

            total_acumulado += montomen;
            mestotal += montomen;
        }
    }

    printf("\n\n");
    printf("Monto Ahorrado Total: %.2f\n", total_acumulado);
    printf("Total de Intereses Acumulados: %.2f\n", intereses_totales);
    printf("Monto Total Acumulado Ganado: %.2f\n", total_acumulado + intereses_totales);

    return 0;
}
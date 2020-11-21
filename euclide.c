#include <stdio.h>
#include <stdlib.h>

int main ()
{
int nombre1 = 0, nombre2 = 0, reste = 0, pgcd = 0, copienombre1 = 0, copienombre2 = 0;
printf("Entrez le premier chiffre \n");
scanf("%d", &nombre1);
printf("Entrez le second chiffre \n");
scanf("%d", &nombre2);
copienombre1 = nombre1;
copienombre2 = nombre2;
do
{
pgcd = nombre1 /nombre2;
reste = nombre1 % nombre2;
printf("%d = %d * %d + %d \n", nombre1, nombre2, pgcd, reste);
nombre1 = nombre2;
nombre2 = reste;
} while (reste != 0);
printf("PGCD (%d, %d) = %d \n", copienombre1, copienombre2, nombre1);

return 0;
}

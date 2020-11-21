#include<stdlib.h>
#include<string.h>
int main()
{
        // Partie déclaration
        int n0, a0, v0=0, v=1, a, c, n, r, q;
        // Corps du programme
        printf("Donner la valeur de n : \n");
        scanf("%d", &n);
        printf("Donner la valeur de a : \n");
        scanf("%d", &a);
        printf("\n");
        n0 = n;
        a0 = a;
        do
        {
            q = n0 / a0; //nombre entier immédiatement <= à n0 / a0
              r = n0 - q * a0;
            printf("Le quotient q : %d\n    " , q );
            printf("Le reste r : %d\n" , r);
            c = v0 - q * v;
            if (c >= 0) c = c % n;
            else c = n + c % n;
            v0 = v;
            v = c;
            n0 = a0;
            a0 = r;
        } while ( r > 0);

        printf("\n");
        if (n0 != 1) printf("%d n'a pas d'inverse modulo %d\n", a, n);
        else printf("L’inverse de (%d) -1 modulo %d = %d\n", a, n, v0);

        printf("\n");
        printf("Vérification :\n");
        printf("\n");
        printf("Le produit : %d * %d = %d \n" , v0, a, (v0 * a));
        printf("La division : %d / %d = %d \n" , (v0*a), n, (v0*a)/n);
        printf("Le reste de division : %d - %d * %d = %d - %d = %d " , (v0*a), ((v0*a)/n), n, (v0*a), (((v0*a)/n)*n), (v0*a)%n);
        printf("\n");
        return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[50];
    typedef struct elt {int val; char c;} text1;
    typedef struct elt1 {char c; int cl;} chf;

    printf("donnez un text \n");
    scanf("%s",&text);

    text1 tab[26];
    int j=0;
    int i;
    char text_temp;
    int val;
    int f;
    int k;
    int E=4;
    int max;
    chf tableau[26];
    char c;
    int s = 0;

   for ( c = 'A'; c <= 'Z'; ++c)
   {
       tableau[s].c = c;
       tableau[s].cl = s;
       s++;
   }
    printf("\n");
    f = 0;
    for(j=0; j<strlen(text); j++)
    {
         val = 1;
        text_temp = text[j];
        for(i= 0; i<strlen(text); i++)
        {
            if(text[i] == text_temp)
            val++;
        }
        tab[f].val=val;
        tab[f].c=text[j];
        f++;
    }

    max = 0;
    int tmp;
    char ch;

    for(i=0 ; i<f ;i++)
   {
       if(tab[i].val > max)
        {
            max = tab[i].val;
            ch = tab[i].c;
        }
   }

   for(i=0; i<26 && tableau[i].c != ch  ; i++);

   if (tableau[i].c == ch )
       k = tableau[i].cl - E;

 printf("\nVous avez demandé le déchiffrement du fichier %s avec un décalage de %d.\n", text, k );

        int index;
    	for( index = 0; index != strlen(text); ++index )
			{
				// déchiffrement des majuscules
				if( text[ index ] >=65 && text[ index ] < 91 )
					text[ index ] = ( ( text[ index ] - 65 ) - k ) % 26 + 65;
				// déchiffrement des minuscules
				if( text[ index ] >=97 && text[ index ] < 123 )
					text[ index ] = ( ( text[ index ] - 97 ) - k ) % 26 + 97;
			}

			printf("\n %s \n", text);

    return 0;
   }


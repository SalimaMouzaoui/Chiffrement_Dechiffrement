#include <stdio.h>
#include <stdlib.h>

// code de cesar

// flush
void flush()
{
	while( getchar() != '\n' )
		continue;
}

// programme principal
int main()
{
	int decalage = 0;
	char texte[256];
	char choix = 'c';
	// choix
	printf( "Code de Cesar\n" );
	printf( "\nSaisir le décalage : " );
	scanf( "%d", &decalage );
	flush();
	printf( "\nSaisir du texte: " );
	scanf( "%s", texte );
	flush();
	printf( "\nChiffrement [c] ou déchiffrement [d] : " );
	scanf( "%c", &choix );
	// synthèse
	switch( choix )
	{
	case 'c' :
		printf("\nVous avez demandé le chiffrement du fichier %s avec un décalage de %d.\n", texte, decalage );
		{
			int index;

			// chiffrement dans le mémoire tampon
			for( index = 0; index != strlen(texte); ++index )
			{
				// chiffrement des majuscules
				if( texte[ index ] >=65 && texte[ index ] < 91 )
					texte[ index ] = ( ( texte[ index ] - 65 ) + decalage ) % 26 + 65;
				// chiffrement des minuscules
				if( texte[ index ] >=97 && texte[ index ] < 123 )
					texte[ index ] = ( ( texte[ index ] - 97 ) + decalage ) % 26 + 97;
			}

	printf("\n%s\n" , texte);
	}
		return 0;
	case 'd' :
		printf("\nVous avez demandé le déchiffrement du fichier %s avec un décalage de %d.\n", texte, decalage );
		{
			int index;

		// déchiffrement dans le mémoire tampon
			for( index = 0; index != strlen(texte); ++index )
			{
				// déchiffrement des majuscules
				if( texte[ index ] >=65 && texte[ index ] < 91 )
					texte[ index ] = ( ( texte[ index ] - 65 ) - decalage ) % 26 + 65;
				// déchiffrement des minuscules
				if( texte[ index ] >=97 && texte[ index ] < 123 )
					texte[ index ] = ( ( texte[ index ] - 97 ) - decalage ) % 26 + 97;
			}

	printf("\n%s\n" , texte);
	}
		return 0;
	default:
		return -1;
	}
}

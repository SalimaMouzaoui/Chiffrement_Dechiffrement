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
	printf( "\nSaisir le d�calage : " );
	scanf( "%d", &decalage );
	flush();
	printf( "\nSaisir du texte: " );
	scanf( "%s", texte );
	flush();
	printf( "\nChiffrement [c] ou d�chiffrement [d] : " );
	scanf( "%c", &choix );
	// synth�se
	switch( choix )
	{
	case 'c' :
		printf("\nVous avez demand� le chiffrement du fichier %s avec un d�calage de %d.\n", texte, decalage );
		{
			int index;

			// chiffrement dans le m�moire tampon
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
		printf("\nVous avez demand� le d�chiffrement du fichier %s avec un d�calage de %d.\n", texte, decalage );
		{
			int index;

		// d�chiffrement dans le m�moire tampon
			for( index = 0; index != strlen(texte); ++index )
			{
				// d�chiffrement des majuscules
				if( texte[ index ] >=65 && texte[ index ] < 91 )
					texte[ index ] = ( ( texte[ index ] - 65 ) - decalage ) % 26 + 65;
				// d�chiffrement des minuscules
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

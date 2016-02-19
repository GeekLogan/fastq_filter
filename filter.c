#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char ** args ) {
	int trim_len = 35;

	if( argc > 1 ) {
		trim_len = (int) atoi( args[1] );
	}
	
	char * line1, * line2, * line3, * line4;
	size_t buffer = 250;

	line1 = (char *) malloc(buffer + 1);
	line2 = (char *) malloc(buffer + 1);
	line3 = (char *) malloc(buffer + 1);
	line4 = (char *) malloc(buffer + 1);
	
	while( !feof( stdin ) ) {
		getline( &line1, &buffer, stdin );
		getline( &line2, &buffer, stdin );
		getline( &line3, &buffer, stdin );
		getline( &line4, &buffer, stdin );
		
		if( strlen( line2 ) > trim_len ) {
			printf("%s%s%s%s", line1, line2, line3, line4);
		}
	}

	free( line1 );
	free( line2 );
	free( line3 );
	free( line4 );
}
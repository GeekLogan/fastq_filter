#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main( int argc, char ** args ) {
	int trim_min = 35;
	int trim_max = INT_MAX;

	if( argc > 1 ) trim_min = (int) atoi( args[1] );
	if( argc > 2 ) trim_max = ((int) atoi( args[2] )) - 1;
	
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
		
		//NEED TO CONFIRM OBO BELOW:
		if( strlen( line2 ) > trim_min && strlen( line2 ) < trim_max ) {
			printf("%s%s%s%s", line1, line2, line3, line4);
		}
	}

	free( line1 );
	free( line2 );
	free( line3 );
	free( line4 );
}
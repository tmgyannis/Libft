#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char * firstName = (char *) malloc( 40 );
    char * lastName = (char *) malloc( 40 );
    char * fullName;
    size_t fullSize;

    printf( "Please, enter your first name: " );
    scanf( "%s", firstName );

    printf( "Enter your last name: " );
    scanf( "%s", lastName );
       
    fullSize = strlen( firstName ) + 1 +  strlen( lastName ) + 1;
       
    fullName = (char *) malloc( fullSize );
    strcpy( fullName, firstName );
    strcat( fullName, " " );
    strcat( fullName, lastName );
        
    printf( "Full name is: %s\n", fullName );
        
    free( fullName );
    free( lastName );
    free( firstName );
    
    return 0;
}

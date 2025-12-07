#include <stdio.h>


int main () {
    int numbers [100];
    int index = 0;

    for ( int n = 100; n >= 50; n-- ) {

        if ( n % 3 == 0 ) {
        numbers [index] = n;    
        index++;
    }
}
    for ( int i = 0; i < index; i++ ) {
        printf ("%d", numbers [i]);
        if (i < index - 1) {
            printf (", "); // Print comma except after the last number
        }
    }
    return 0;
}


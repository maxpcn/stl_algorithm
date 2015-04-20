/*
 * =====================================================================================
 *
 *       Filename:  prog-4-5-postfix.cpp
 *
 *    Description:  postfix-expression evaluation
 *
 *        Version:  1.0
 *        Created:  2015/3/5 17:14:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <string>
#include <string.h>
#include "stack.cxx"


int main( int argc, char *argv[ ] )
{
    char *expression = argv[ 1 ];
    int N = strlen( expression );
    STACK< int > save( N );

    for ( int i = 0; i < N; i++ ) {
        if ( expression[ i ] == '+' ) {
            save.push( save.pop( ) + save.pop( ) );
        }
        if ( expression[ i ] == '*' ) {
            save.push( save.pop( ) + save.pop( ) );
        }
        if ( ( expression[ i ] >= '0' ) && ( expression[ i ] <= '9' ) ) {
            save.push( 0 );
        }

        while ( ( expression[ i ] >= '0' ) && ( expression[ i ] <= '9' ) ) {
            save.push( 10 * save.pop( ) + ( expression[ i++ ] - '0' ) );
        }
    }
}

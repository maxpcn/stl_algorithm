/*
 * =====================================================================================
 *
 *       Filename:  prog-4-6-infix-to-postfix-conversion.cpp
 *
 *    Description:  infix to postfix conversion
 *
 *        Version:  1.0
 *        Created:  2015/3/7 14:23:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstring>
#include "stack.cxx"

using namespace std;

int main( int argc, char *argv[ ] )
{
    char *a = argv[ 1 ];
    int N = strlen( a );
    STACK< char > ops( N );

    for ( int i = 0; i < N; i++ ) {
        if ( a[ i ] == ')' )
            cout << ops.pop( ) << " ";
        if ( ( a[ i ] == '+' ) || ( a[ i ] == '*' ) )
            ops.push( a[ i ] );
        if ( ( a[ i ] >= '0' ) && ( a[ i ] <= '9' ) )
            cout << a[ i ] << " ";
    }
    cout << endl;
}
